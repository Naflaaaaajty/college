#pragma once
void menu();
//extern int EASY_COUNT;
//extern int	ROW;
//extern int	COL;
//extern int	ROWs;
//extern int	COLs;
#include<stdio.h>
#include<windows.h>
#include<time.h>
void game();
#define ROW 9
#define COL 9
#define ROWs ROW+2
#define COLs COL+2	
#define EASY_COUNT 10
void setmine(char mine[ROWs][COLs], int row, int col);
void initboard(char board[ROWs][COLs], int rows, int cols, char set);
void displayshow(char board[ROWs][COLs], int row, int col);
void findmine(char mine[ROWs][COLs], char show[ROWs][COLs], int row, int col);

int get_mine_count(char mine[ROWs][COLs], int x, int y);
void find(char mine[ROWs][COLs], char show[ROWs][COLs], int x, int y);



