# 初入C语言（基本形式）

1. 

```C
#include<stdio.h>   //头文件

int main(){  //主函数-程序的入口-main函数有且仅有一个

	printf("helloworld\n");//打印函数（输出函数） 
	return 0;  //返回的值为0
}
int//整型的意思  
```

2. * 局部变量的作用域，只在代码块（{}）前；
   * 全局变量的作用域，整个工程；
   
   * 局部变量(代码块内)和全局变量建议不同-容易造成误会，出BUG；
   * 当名字相同时，局部变量优先。  
3. 

```C
#include<stdio.h>
int main(){
    int num1 = 0;
    int num2 = 0;
    int sum = 0;//C语言语法规定，变量要定义在当前代码块的最前面
    //输出数据-输入函数scanf
    scanf("%d%d",&num1,&num2);//两个值一上需取地址符号&
    sum = num1 + num2;
    printf("sum = %d\n",sum);
    
    return 0;
}
```

[![yKn6Qx.png](https://s3.ax1x.com/2021/02/03/yKn6Qx.png)](https://imgchr.com/i/yKn6Qx)

4. 