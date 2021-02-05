# 分支和循环

## 分支

### if

``` c
//单分支
if(表达式)
    语句;
if(表达式)
    语句;
else
    语句;
//多分支
if(表达式1)
    语句1;
else if
    语句2;
else //可用else 也可用else if 无区别
    语句3;

//若需要只能语句列表 要用{}括起来，
if(表达式){
    
}else{
    
}
//悬空else情况1
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
		else//离他最近的未匹配的if匹配
			printf("haha\n");

//悬空else情况2
	int a = 0;
	int b = 2;
	if (a == 1)
		if (b == 2)
			printf("hehe\n");
    else//这个else也是和最近的未匹配的if匹配
			printf("haha\n");

//和第一个if匹配
	int a = 0;
	int b = 2;
	if (a == 1){
		if (b == 2)
			printf("hehe\n");
    }//这里有{}代码块
     else//这里的if就是和第一个if匹配
			printf("haha\n");

//错误1
	int num = 4;
	if (num = 5)//这里的=为赋值符号
		printf("heh\n");//此代码永远为对


	int num = 4;
	if (num == 5)//这里的==为等号
		printf("heh\n");
```

### switch语句(多分支)

```c
//e.g.
//繁琐写法	
int day = 0;
	scanf("%d", &day);
	if (1 == day)
		printf("星期1\n");
	else if (2 == day)
		printf("星期2\n");
	else if (3 == day)
		printf("星期3\n");

//////////////////////////////////////////////////////
//switch语句写法
int main() {
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n"); break;//break 结束语句。（跳出执行语块）
	case 2:
		printf("星期2\n"); break;
	case 3:
		printf("星期3\n"); break;
	case 4:
		printf("星期4\n"); break;
	case 5:
		printf("星期5\n");
		break;
	}

	return 0;
}
/*****************************************/
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
//练习
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
```

## 循环

### while

```C
//while 语句
while(表达式){
    循环语句
}
///////////////
int i = 0;
	while (i<=10)
	{
		printf("%d\n", i);
		i++;
	}
//break和continue的区别
//break终止后期所有循环--永久终止循环
while (i<=10)
	{
		if (i == 5) break;//到5直接结束语句
			printf("%d\n", i);
			i++;
	}
//continue 终止本次循环后面的代码
while (i<=10)
	{
		if (i == 5) continue;
			printf("%d\n", i);
			i++;
	}
```