#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu() {
	printf("----------------------------------------\n");
	printf("-----------------1.��ʼ -----------------\n");
	printf("-----------------2.�˳���Ϸ -------------\n");
	printf("-----------------------------------------\n");
}


//ʵ��game����,��������Ϸ
void game() {
	//��ʼ�����̣�����������������Ͽո�
	char board[ROW][COL];
	void initBoard(board, ROW, COL);
	//��ӡ����
	//�ȴ������û������룬��ֵ
	// �ж��û����������˭ʤ��----����������ʤ������������ҳ��
	//��������
	//�ж�ʤ��--����ҳ��
	//�ȴ��û����룬��ֵ

}


int main() {
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			void game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			input = 0;
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;
		}
	} while (input);

	return 0;
}