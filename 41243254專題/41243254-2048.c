#include "area.h"
int number[4][4] = { 0 };
int win2048[11] = { 2,4,8,16,32,64,128,256,512,1024,2048 };
int main()
{
	int loss0,win0,re,score=0;
	loss0 = win0 = 1;
	firstrandom();
    while (win0!=0&&loss0!=0)
	{
	      re=record(score);
	      gamebox(re,&score);
	      play(&score);
	      random();
		  win(&win0);
		  loss(&loss0);
    }
	system("pause");
	return 0;
}
void gamebox(int re, int* score)
{
	int i, j, k;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 10; k++)
			{
				if (number[i][j] == win2048[k])
				{

				}
			}

		}
	}
	system("cls");
	printf("┌──────┬──────┬──────┬──────┐    \n");
	printf("│      │      │      │      │    得分:%d\n", *score);
	printf("│%4d  │%4d  │%4d  │%4d  │	  \n", number[0][0], number[0][1], number[0][2], number[0][3]);
	printf("│      │      │      │      │    紀錄:%d \n", re);
	printf("├──────┼──────┼──────┼──────┤\n");
	printf("│      │      │      │      │\n");
	printf("│%4d  │%4d  │%4d  │%4d  │	  \n", number[1][0], number[1][1], number[1][2], number[1][3]);
	printf("│      │      │      │      │  \n");
	printf("├──────┼──────┼──────┼──────┤\n");
	printf("│      │      │      │      │\n");
	printf("│%4d  │%4d  │%4d  │%4d  │	  \n", number[2][0], number[2][1], number[2][2], number[2][3]);
	printf("│      │      │      │      │  \n");
	printf("├──────┼──────┼──────┼──────┤\n");
	printf("│      │      │      │      │\n");
	printf("│%4d  │%4d  │%4d  │%4d  │	 \n", number[3][0], number[3][1], number[3][2], number[3][3]);
	printf("│      │      │      │      │  \n");
	printf("└──────┴──────┴──────┴──────┘\n");
}
int win(int* Win)
{
	int i, j;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (number[i][j] == win2048[10])
			{
				*Win = 0;
				printf("\n恭喜破關\n");
			}
		}
	}
}
int loss(int* Loss)
{
	int i, j, loss = 0;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (number[i][j] != 0)
				loss++;
		}
	}
	if (loss == 16)
	{
		for (i = 0; i <= 3; i++)
		{
			for (j = 0; j <= 3; j++)
			{
				if (i - 1 < 0 || i + 1 >= 4 || j - 1 < 0 || j + 1 >= 4 ||
					(number[i][j] != number[i - 1][j] && number[i][j] != number[i][j - 1] &&
						number[i][j] != number[i][j + 1] && number[i][j] != number[i + 1][j]))
				{
					*Loss = 0;
					printf("遊戲結束\n");
				}
			}
		}
	}
}
void firstrandom()
{
		srand((unsigned)time(NULL));
		int twofour[10] = { 2,4,2,4,2,4,2,4,2,4 }, i, j, a, b;
		for (j = 0; j <= 1; j++)
		{
			i = rand() % 9;
			a = rand() % 4;
			b = rand() % 4;
			number[a][b] = twofour[i];
		}
}
void random()
{
	int i, j, b, a[2] = { 2,4 };
	srand((unsigned)time(NULL));
	do {
		i = rand() % 4;
		j = rand() % 4;
	} while (number[i][j] != 0);
	b = rand() % 2;
	number[i][j] = a[b];
}
void play(int* score)
{
	int w, a, s, d;
	w = a = s = d = 0;
	int key;
	do {
		key = getch();
		switch (key)
		{
		case 'w':
		case 'W':
			up(score);
			break;
		case 'a':
		case 'A':
			left(score);
			break;
		case 's':
		case 'S':
			down(score);
			break;
		case 'd':
		case 'D':
			right(score);
			break;
		case'p':
			number[1][1] = win2048[10];
			main();
			break;
		default:
			printf("請輸入正確的指令！\n");
			break;
		}
	} while (key != 'w' && key != 'a' && key != 's' && key != 'd' && key != 'p');
}
void up(int* score)
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{
			if (number[j][i] != 0)
			{
				for (k = j; k > 0 && number[k - 1][i] == 0; k--)
				{
					number[k - 1][i] = number[k][i];
					number[k][i] = 0;
				}
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (number[j][i] == number[j + 1][i])
			{
				for (k = 0; k < 11; k++)
				{
					if (number[j][i] == win2048[k])
					{
						number[j][i] = win2048[k + 1];
						number[j + 1][i] = 0;
						*score = number[j][i];
						Score(score);
						break;
					}
				}
			}
		}
	}
}
void down(int* score)
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (number[j][i] != 0)
			{
				for (k = j; k < 3 && number[k + 1][i] == 0; k++)
				{
					number[k + 1][i] = number[k][i];
					number[k][i] = 0;
				}
			}
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (number[j][i] == number[j + 1][i] && number[j][i] != 0)
			{
				for (k = 0; k < 11; k++)
				{
					if (number[j][i] == win2048[k])
					{
						number[j + 1][i] = win2048[k + 1];
						number[j][i] = 0;
						*score = win2048[k + 1];
						Score(score);
						break;
					}
				}
			}
		}
	}
}
void left(int* score)
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 1; j < 4; j++)
		{
			if (number[i][j] != 0)
			{
				for (k = j; k > 0 && number[i][k - 1] == 0; k--)
				{
					number[i][k - 1] = number[i][k];
					number[i][k] = 0;
				}
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (number[i][j] == number[i][j + 1])
			{
				for (k = 0; k < 11; k++) {
					if (number[i][j] == win2048[k])
					{
						number[i][j] = win2048[k + 1];
						number[i][j + 1] = 0;
						*score = number[i][j];
						Score(score);
						break;
					}
				}
			}
		}
	}
}
void right(int* score)
{
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 2; j >= 0; j--)
		{
			if (number[i][j] != 0)
			{
				for (k = j; k < 3 && number[i][k + 1] == 0; k++)
				{
					number[i][k + 1] = number[i][k];
					number[i][k] = 0;
				}
			}
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 2; j >= 0; j--) { // Updated
			if (number[i][j] == number[i][j + 1] && number[i][j] != 0) {
				for (k = 0; k < 11; k++) {
					if (number[i][j] == win2048[k]) {
						number[i][j + 1] = win2048[k + 1];
						number[i][j] = 0;
						*score = win2048[k + 1];
						Score(score);
						break;
					}
				}
			}
		}
	}
}
