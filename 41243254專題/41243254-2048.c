#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "area.h"
void gamebox();
void firstrandom();
void play();
void up();
void down();
void left();
void right();
int number[4][4] = { 0 };
int win2048[9] = { 8,16,32,64,128,256,512,1024,2048 };
int main()
{
	int i;
	random();
	system("cls");
	game();
	gamebox();
	play();
	return 0;
}

void gamebox()
{
	printf("┌──────┬──────┬──────┬──────┐\n");
	printf("│      │      │      │      │\n");
	printf("│%4d  │%4d  │%4d  │%4d  │	 得分:%d \n",number[0][0], number[0][1], number[0][2], number[0][3], 0);
	printf("│      │      │      │      │  \n");
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
	key = getch(); //對鍵入的命令進行識別 
		switch (key)
	{
		case 87:
		case 119:
			up();
			break;//輸入上 
		case 65:
		case 97:
			left();
			break;//輸入左 
		case 83:
		case 115:
			down();
			break;//輸入下 
		case 68:
		case 100:
			right();
			break;//輸入右
		default:
		{//若命令不符合要求，運用遞迴重新得到命令 
			printf("請輸入正確的指令！\n");
			return play();
		}
	}
}

void up()
{
	int i, j;
	for (i = 3; i != 0; i--)
	{
		for ( j = 3; j !=0; j--)
		{
			number[j][i];

		}
	}

}