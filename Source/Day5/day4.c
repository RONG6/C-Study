#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>

int Add(int x, int y){
	int z = 0;
    z = x + y;
    return z;

}

int main() {

	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);

	printf("%d", sum);
	return 0;
}






////int main() {
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++) {
//		for (i = 1; i <= n; i++) {
//			ret = ret * i;
//		
//		}
//		sum = sum + ret;
//		ret = 1;
//	}
//	printf("%d", sum);
//	return 0;
//}

/*int main() {
	int  i = 0;
	int ret = 1;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1;i <= n; i++) {
		ret = ret * i;
		sum = sum + ret;
	}
	printf("sum = %d", sum);
	return 0;
}*/