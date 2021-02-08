#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>


//最简单的一个递归函数
/*int main()
{
	printf("heh\n");
	main();
	return 0;
}*/
//接受受一个整型值（无符号），
//按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4.
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
	//递归
	print(num);
	//printf（1234）
	//printf（123） 4
	//printf（12）3 4 
	//printf（1） 2 3 4
	return 0;
}
