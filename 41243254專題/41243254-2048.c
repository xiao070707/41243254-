#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "area.h"
void gamebox(int,int*);
void firstrandom();
void play();
void up();
void down();
void left();
void right();
void random();
void Score(int*);
int record(int);
int loss(int *);
int win(int*);
int number[4][4] = { 0 };
int win2048[11] = {2,4,8,16,32,64,128,256,512,1024,2048};

int win(int* Win)
{
	int i, j;
	for (i = 0; i <=3; i++)
	{
		for ( j = 0; j <=3; j++)
		{
			if (number[i][j]==win2048[10])
			{
				*Win = 0;
				printf("\n���߯}��");
			}
		}
	}
}
int loss(int* Loss)
{
	int i,j,loss=0;
	for ( i = 0; i <=3; i++)
	{
		for ( j = 0; j <=3; j++)
		{
			if (number[i][j] != 0)
				loss++;
			if (loss==16&&number[i][j]!=number[i-1][j]&& number[i][j] != number[i][j-1] && number[i][j] != number[i][j + 1] && number[i][j] != number[i+1][j])
			{
				*Loss = 0;
				printf("�C������");
			}
		}
	}
}
int record(int score)
{
	int RE;
	FILE* pfile;// �ŧi���V�ɮת����c����
	if (score > RE)
	{
		if ((pfile = fopen("record.txt", "w")) == NULL) 
		{
			printf("StudentInfo.txt �ɮ׵L�k�}��");
			system("pause");
			return(0);
		}
		fprintf(pfile,"%d", score);
	}
	if ((pfile = fopen("record.txt", "r")) == NULL) 
	{ 
		printf("story.txt �ɮ׵L�k�}��"); 
		system("pause"); 
		return(0);
	}
	while (!feof(pfile)) 
	{	
		fscanf(pfile,"%d",&RE);	
		printf("%d",RE);		
	}
	fclose(pfile); // �����ɮ�
	return(RE);
}

void Score(int* score)
{
	int i, j;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <=3 ; j++)
		{
			if(number[i][j])//�b�o�̭n�O�o�n�B�z�o����
		}
	}
}

int main()
{
	int loss0,win0,re,score=0;
	loss0 = win0 = 1;
	firstrandom();
    while (win0!=0||loss0!=0);
	{
	      re=record(score);
	      gamebox(re,&score);
	      play();
		  Score(&score);
	      random();
		  win(&win0);
		  end(&loss0);
    }
	return 0;
}

void gamebox(int re,int* score)
{
	system("cls");
	printf("�z�w�w�w�w�w�w�s�w�w�w�w�w�w�s�w�w�w�w�w�w�s�w�w�w�w�w�w�{\n");
	printf("�x      �x      �x      �x      �x\n");
	printf("�x%4d  �x%4d  �x%4d  �x%4d  �x	 �o��:%d \n",number[0][0], number[0][1], number[0][2], number[0][3], *score);
	printf("�x      �x      �x      �x      �x ����:%d \n",re);
	printf("�u�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�t\n");
	printf("�x      �x      �x      �x      �x\n");
	printf("�x%4d  �x%4d  �x%4d  �x%4d  �x	  \n", number[1][0], number[1][1], number[1][2], number[1][3]);
	printf("�x      �x      �x      �x      �x  \n");
	printf("�u�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�t\n");
	printf("�x      �x      �x      �x      �x\n");
	printf("�x%4d  �x%4d  �x%4d  �x%4d  �x	  \n", number[2][0], number[2][1], number[2][2], number[2][3]);
	printf("�x      �x      �x      �x      �x  \n");
	printf("�u�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�q�w�w�w�w�w�w�t\n");
	printf("�x      �x      �x      �x      �x\n");
	printf("�x%4d  �x%4d  �x%4d  �x%4d  �x	 \n", number[3][0], number[3][1], number[3][2], number[3][3]);
	printf("�x      �x      �x      �x      �x  \n");
	printf("�|�w�w�w�w�w�w�r�w�w�w�w�w�w�r�w�w�w�w�w�w�r�w�w�w�w�w�w�}\n");
}

void firstrandom()
{
	srand((unsigned)time(NULL));
	int twofour[10] = { 2,4,2,4,2,4,2,4,2,4 },i,j,a,b;
	for ( j = 0; j <=1 ; j++)
	{
		i = rand() % 9;
		a = rand() % 4;
		b = rand() % 4;
		number[a][b] = twofour[i];
	}
}

void play()
{
	int w, a, s, d;
	w = a = s = d = 0;
	int key;
	key = getch(); //����J���R�O�i���ѧO 
		switch (key)
	{
		case 87:
		case 119:
			up();
			break;//��J�W 
		case 65:
		case 97:
			left();
			break;//��J�� 
		case 83:
		case 115:
			down();
			break;//��J�U 
		case 68:
		case 100:
			right();
			break;//��J�k
		default:
		{//�Y�R�O���ŦX�n�D�A�B�λ��j���s�o��R�O 
			printf("�п�J���T�����O�I\n");
			return play();
		}
	}
}

void up()
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
						break; 
					}
				}
			}
		}
	}
}

void down()
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
		for (j = 3; j > 0; j--)
		{
			if (number[j][i] == number[j - 1][i])
			{
				for (k = 0; k < 11; k++)
				{
					if (number[j][i] == win2048[k])
					{
						number[j-1][i] = win2048[k + 1];
						number[j][i] = 0;
						break;
					}
				}
			}
		}
	}
}

void left()
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
						break; 
					}
				}
			}
		}
	}
}

void right()
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
	for (i = 0; i < 4; i++) 
	{
		for (j = 3; j > 0; j--) 
		{
			if (number[i][j] == number[i][j - 1]) 
			{
				for (k = 0; k < 11; k++) 
				{
					if (number[i][j] == win2048[k]) 
					{
						number[i][j - 1] = win2048[k + 1];
						number[i][j] = 0;
						break;
					}
				}
			}
		}
	}
}

void random()
{
	int i,j,b,a[2] = {2,4};
	srand((unsigned)time(NULL));
	i = rand() % 4;
	j = rand() % 4;
	b = rand() % 2;
	if (number[i][j]==0)
	{
		number[i][j] = a[b];
	}
	else
	{
		random();
	}
}