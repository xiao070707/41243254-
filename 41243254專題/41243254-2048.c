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
	printf("�z�w�w�w�w�w�w�s�w�w�w�w�w�w�s�w�w�w�w�w�w�s�w�w�w�w�w�w�{\n");
	printf("�x      �x      �x      �x      �x\n");
	printf("�x%4d  �x%4d  �x%4d  �x%4d  �x	 �o��:%d \n",number[0][0], number[0][1], number[0][2], number[0][3], 0);
	printf("�x      �x      �x      �x      �x  \n");
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
	int i, j;
	for (i = 3; i != 0; i--)
	{
		for ( j = 3; j !=0; j--)
		{
			number[j][i];

		}
	}

}