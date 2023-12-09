#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void box();
char space[8] = { 32,32,32,32,32,32,32,32 };
int start[2] = { 2,4 };
int main()
{
	box();
	return 0;
}

void box()
{
	int i;
	srand((unsigned)time(NULL));
	printf("¢z¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢s¢w¢w¢w¢w¢w¢w¢{\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	 ±o¤À:%d \n", 2, 2, 2048, 2048, 2048);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	  \n", 2, 2, 2048, 2048);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	  \n", 2, 2, 2048, 2048);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢u¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢q¢w¢w¢w¢w¢w¢w¢t\n");
	printf("¢x      ¢x      ¢x      ¢x      ¢x\n");
	printf("¢x%4d  ¢x%4d  ¢x%4d  ¢x%4d  ¢x	 \n", 0, 0, 0, 0);
	printf("¢x      ¢x      ¢x      ¢x      ¢x  \n");
	printf("¢|¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢r¢w¢w¢w¢w¢w¢w¢}\n");
}
