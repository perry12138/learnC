#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu() {
	printf("----------------------------------------\n");
	printf("-----------------1.开始 -----------------\n");
	printf("-----------------2.退出游戏 -------------\n");
	printf("-----------------------------------------\n");
}


//实现game函数,三子棋游戏
void game() {
	//初始化棋盘（给棋盘里的棋子填上空格）
	char board[ROW][COL];
	void initBoard(board, ROW, COL);
	//打印棋盘
	//等待接受用户的输入，赋值
	// 判断用户输入与电脑谁胜利----如果如果有人胜利则跳至结算页面
	//电脑输入
	//判断胜利--结算页面
	//等待用户输入，赋值

}


int main() {
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏\n");
			void game();
			break;
		case 2:
			printf("退出游戏\n");
			input = 0;
			break;
		default:
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);

	return 0;
}