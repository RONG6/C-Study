#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//��򵥵�һ���ݹ麯��
/*int main()
{
	printf("heh\n");
	main();
	return 0;
}*/
//������һ������ֵ���޷��ţ���
//����˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4.
void print(int n)
{
	if (n > 9)
	{
		print(n/10);
	}
	printf("%d  ", n%10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);//1234
	//�ݹ�
	print(num);
	//printf��1234��
	//printf��123�� 4
	//printf��12��3 4 
	//printf��1�� 2 3 4
	return 0;
}
