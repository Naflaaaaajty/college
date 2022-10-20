#include<stdio.h>
#include<windows.h>
#include<time.h>

#pragma once
#define ROW 10
#define	COL 10
void game();
void menu();
void disp(char board[ROW][COL]);
void intbord(char board[ROW][COL]);
void move(char board[ROW][COL]);
int boardif(char board[ROW][COL]);
void aimove(char board[ROW][COL]);
int heng(char board[ROW][COL]);
int shu(char board[ROW][COL]);
int youxie(char board[ROW][COL]);
int zuoxie(char board[ROW][COL]);
int reopen(char board[ROW][COL]);


