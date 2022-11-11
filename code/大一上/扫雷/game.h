#pragma once
void menu();
extern int EASY_COUNT;
extern int	ROW;
extern int	COL;
extern int	ROWs;
extern int	COLs;
extern char** mine;
extern char** show;
#include<stdio.h>
#include<windows.h>
#include<time.h>
void game();
void displaymine(int row, int col);
void setmine( int row, int col);
void initboardshow(int rows, int cols, char set);
void displayshow( int row, int col);
void findmine( int row, int col);
void initboardmine(int rows, int cols, char set);
int get_mine_count(int x, int y);
void find( int x, int y);



