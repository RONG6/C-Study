#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>



///2.дһ�����������������ͱ��������ݡ�
/*void Swap1(int x, int y)//void ��ʾû�з���ֵ���ա�0����˼
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
*///���ַ������С�
//������
/*void Swap2(int* x, int* y)//void ��ʾû�з���ֵ���ա�0����˼
{
	//ָ��ķ��� 
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}*/
/*int main()
{
	int a = 10;
   // int* pa = &a;//paָ�����
	//*pa = 20;//�����ò�����
	int b = 20;
	//Swap1(a, b); //���ַ������С�
	//int tmp = 0;
	//������
	//����SWap2����
	Swap2(&a, &b);//����ַ ��&��ȡ��ַ����
	////����һ
	////tmp = 0;
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d,b=%d", a, b);
	return 0;
}*/



//1.���庯��
/*int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 10;
	int b = 20;
	//������ʹ��
	int max = get_max(a, b);//a��b����
	printf("max = %d\n", max);
	max = get_max(100, 300);
	printf("max%d", max);
	return 0;
}*/

/*int main()
{
	//memser -- memory-�ڴ�  set--����
	char arr[] = "hello world";
	memset(arr, '*', 5);//��ǰ5���ַ����Ϊ*��
	printf("%s\n", arr);
	return 0;
}*/
/*int main()
{
	char arr[] = "bit";
	char arr2[20] = "#########";
	strcpy(arr2, arr);//��arr�������copy��arr2�С�
	printf("%s", arr2);
	//strlen - string length --�ַ��������й�
	//strcpy --string copy --�ַ�������
	return 0;
}*/

