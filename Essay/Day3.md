# 分支和循环

## if

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

## switch语句

```c
//繁琐写法	
int day = 0;
	scanf("%d", &day);
	if (1 == day)
		printf("星期1\n");
	else if (2 == day)
		printf("星期2\n");
	else if (3 == day)
		printf("星期3\n");
//switch语句写法

```

