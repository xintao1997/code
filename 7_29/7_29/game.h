#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define row 12
#define col 12
#define COUNT 10//�������׵�����
extern char real_mine[row][col];//��������

void muen();           //�˵�����
void init_mine();      //��ʼ�����麯��
void print_player();   //��ӡ�������
void print_mine();     //��ӡ��������� 
void set_mine();       //���׺���
int count_mine();      //ͳ����Χ�׵ĸ���
void safe_mine();      //�����һ�α���ը���ĺ���
int  sweep_mine();     //ɨ�׺���
void open_mine(int x, int y);//չ������
int count_show_mine(); //�ж��������ʣ��δ֪����ĸ���