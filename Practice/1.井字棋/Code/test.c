#define _CRT_SECURE_NO_WARNINGS 1 
//������������Ϸ
#include"game.h"
//��Ϸ�������㷨ʵ��
void game() {
	char ret = 0;//�ж�˭Ӯ��
	// ����--�����Һ͵����߳���������Ϣ��ROW�У� COL�У�
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	//����
	while (1) {
		//�������
		Player(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
		//��������
		Computer(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret = Iswin(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		
	}
	if (ret == '*') {
		puts("���Ӯ��");
	}
	else if (ret == '#') {
		puts("����Ӯ��");
	}
	else
	{
		puts("ƽ�֣�");
	}
}
void menu()//�˵�
{
	puts("1.play   0.exit");
}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
        default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);


}
int main() {

	test();
	return 0;
}