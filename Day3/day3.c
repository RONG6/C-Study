#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int main()
{
	int i = 0;
	while (i<=10)
	{
		i++;
		if (i == 5)continue;
			printf("%d\n", i);
			
	}
	return 0;
}


/*int main() {
	int n = 1;
	int m = 2;
	switch (n) {
	case 1:
		m++;//m==3
	case 2:
		n++;//n==2
	case 3:
		switch (n)//n=2 ���Խ���
		{//switch ������Ƕ��ʹ��
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
			printf("����1\n"); break;
		case 2:
			printf("����2\n"); break;
		case 3:
			printf("����3\n"); break;
		case 4:
			printf("����4\n"); break;
		case 5:
			printf("����5\n");
			break;
		default:
			printf("�������\n");
		}
		day = 0;
	}
	return 0;
}



/*int main() {
	int day = 0;
	scanf("%d", &day);
	if (1 == day)
		printf("����1\n");
	else if (2 == day)
		printf("����2\n");
	else if (3 == day)
		printf("����3\n");
	return 0;
}*/

////��ϰ1
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
//	if (num = 5)//�����=Ϊ��ֵ����
//		printf("heh\n");
//	
//
//
//	/*����else
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
//	if (age < 18)printf("δ����");
//	else printf("chengnian");
//	*/
//	return 0;
//}
//









