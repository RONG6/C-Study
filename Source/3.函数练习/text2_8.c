#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>



///2.写一个函数交换两个整型变量的内容。
/*void Swap1(int x, int y)//void 表示没有返回值，空、0的意思
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
*///这种方法不行。
//方法二
/*void Swap2(int* x, int* y)//void 表示没有返回值，空、0的意思
{
	//指针的方法 
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}*/
/*int main()
{
	int a = 10;
   // int* pa = &a;//pa指针变量
	//*pa = 20;//解引用操作。
	int b = 20;
	//Swap1(a, b); //这种方法不行。
	//int tmp = 0;
	//方法二
	//调用SWap2函数
	Swap2(&a, &b);//传地址 ‘&’取地址符号
	////方法一
	////tmp = 0;
	//tmp = a;
	//a = b;
	//b = tmp;
	printf("a=%d,b=%d", a, b);
	return 0;
}*/



//1.定义函数
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
	//函数的使用
	int max = get_max(a, b);//a，b传参
	printf("max = %d\n", max);
	max = get_max(100, 300);
	printf("max%d", max);
	return 0;
}*/

/*int main()
{
	//memser -- memory-内存  set--设置
	char arr[] = "hello world";
	memset(arr, '*', 5);//把前5个字符填充为*。
	printf("%s\n", arr);
	return 0;
}*/
/*int main()
{
	char arr[] = "bit";
	char arr2[20] = "#########";
	strcpy(arr2, arr);//把arr里的内容copy到arr2中。
	printf("%s", arr2);
	//strlen - string length --字符串长度有关
	//strcpy --string copy --字符串拷贝
	return 0;
}*/

