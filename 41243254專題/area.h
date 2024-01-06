#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void gamebox(int, int*);
void firstrandom();
void play(int*);
void up(int*);
void down(int*);
void left(int*);
void right(int*);
void random();
void Score(int*);
int record(int);
int loss(int*);
int win(int*);
