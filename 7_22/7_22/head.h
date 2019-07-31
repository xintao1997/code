#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define ROWS 3
#define COLS 3

void show_board(char board[ROWS][COLS], int rows, int cols);//打印棋盘
void init_board(char board[ROWS][COLS], int rows, int cols);//初始化棋盘为空格
void computer_move(char board[ROWS][COLS], int rows, int cols);//电脑落子
void player_move(char board[ROWS][COLS], int rows, int cols);//玩家落子
char check_win(char board[ROWS][COLS], int rows, int cols);//判断输赢