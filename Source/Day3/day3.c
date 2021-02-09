#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
int main()
{
	int i,j = 0;
	//                  i为0，0代表假。就循环一次，是复制操作不是，判断语句。
	for ( i = 0,j = 0; i = 0; i++,j++)
	{
		j++;
		printf("%d%d\n", i, j);
	}
	//for (;;)
		//printf("hehe\n");
	/*int i = 0;
	//    初始    判断   调整
	for (i = 0; i <= 10; i++)
	{
		if (i == 5)
		{
			continue;
		}
		printf("%d\n", i);
	}*/
	return 0;
}


/*/*int main() {
	int ret = 0;
	char password[20] = { 0 };
	int ch = 0;
	printf("请输入密码：");
	scanf("%s", password);//输入密码，存放在password数组中
	while (ch = getchar() != '\n') 	;
	printf("请确定密码（Y/N）：");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功");
	else
		printf("确认失败");
	printf("%s", &password);
	/*int ch = 0;
	//EOF -- end of file 文件结束的标志
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
//	}*/
//
//
//
//	return 0;
//}*/
//




/*int main()
{
	int i = 0;
	while (i<=10)
	{
		i++;
		if (i == 5)continue;
			printf("%d\n", i);
			
	}
	return 0;
}*/


/*int main() {
	int n = 1;
	int m = 2;
	switch (n) {
	case 1:
		m++;//m==3
	case 2:
		n++;//n==2
	case 3:
		switch (n)//n=2 可以进行
		{//switch 语句可以嵌套使用
		case 1:
			n++;
		case 2:
			m++;//m=4
			n++;//n=3
			break;
		default:
			break;
		}
	case 4:
		m++;//m=5;
		break;
	}
	printf(" m= %d,n=%d", m, n);
	return 0;
}*/
/*int main() {
	int day = 0;
	while (1)
	{
		scanf("%d", &day);
		switch (day)
		{
		case 1:
			printf("星期1\n"); break;
		case 2:
			printf("星期2\n"); break;
		case 3:
			printf("星期3\n"); break;
		case 4:
			printf("星期4\n"); break;
		case 5:
			printf("星期5\n");
			break;
		default:
			printf("输入错误\n");
		}
		day = 0;
	}
	return 0;
}



/*int main() {
	int day = 0;
	scanf("%d", &day);
	if (1 == day)
		printf("星期1\n");
	else if (2 == day)
		printf("星期2\n");
	else if (3 == day)
		printf("星期3\n");
	return 0;
}*/

////练习1
//int main() {
//	int i = 0;
//
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//
//
//
//	return 0;
//}


//int main() {
//	int num = 4;
//	if (num = 5)//这里的=为赋值符号
//		printf("heh\n");
//	
//
//
//	/*悬空else
//	int a = 0;
//	int b = 2;
//	if (a == 1) {
//		if (b == 2)
//			printf("hehe\n");
//
//	}
//	else
//			printf("haha\n");
//			*/
//	/*int age = 10;
//	if (age < 18)printf("未成年");
//	else printf("chengnian");
//	*/
//	return 0;
//}
//









