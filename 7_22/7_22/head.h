#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define ROWS 3
#define COLS 3

void show_board(char board[ROWS][COLS], int rows, int cols);//��ӡ����
void init_board(char board[ROWS][COLS], int rows, int cols);//��ʼ������Ϊ�ո�
void computer_move(char board[ROWS][COLS], int rows, int cols);//��������
void player_move(char board[ROWS][COLS], int rows, int cols);//�������
char check_win(char board[ROWS][COLS], int rows, int cols);//�ж���Ӯ