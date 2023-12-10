#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "area.h"
void box(int[][4]);
int main()
{
	int number[4][4] = { 0 };
	number[2][1] = 1;
	box(number);
	system("cls");
	number[2][2] = 1;
	box(number);
	return 0;
}

void box(int number[][4])
{
	int* piA;
	//piA = &number[0][0];
	//*(piA+1) = 1;
	int i;
	srand((unsigned)time(NULL));
	printf("¢z¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢{\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	 ±o¤À:%d \n",number[0][0], number[0][1], number[0][2], number[0][3], 0);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	  \n", number[1][0], number[1][1], number[1][2], number[1][3]);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	  \n", number[2][0], number[2][1], number[2][2], number[2][3]);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	 \n", number[3][0], number[3][1], number[3][2], number[3][3]);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢|¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢}\n");
	
}
