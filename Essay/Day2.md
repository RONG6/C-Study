



# 警示或错误的提示

## scanf

- scanf 是C语言提供的-对所有编译器有效；
- scanf_s 是VS编译器提供的-可能对其他的编译器无效；
- 解决办法-

```
#define _CRT_SECURE_NO_WARNINGS 1  //放在源文件的第一行
```

便捷方法：找到VS的路径——在Common7\IDE\VC\vcprojectitems/newc++file.cpp 里加上 (管理员权限)

```
#define _CRT_SECURE_NO_WARNINGS 1 
```
# 常量
- 字面常量
- const 修饰的常变量
- #define 定义的标识符常量
- 枚举常量

```c
//字面变量
3;
4;
5;//字面变量

//const 修饰的常变量
const int num = 4;// const - 常属性，不可变
//但num 还是变量，但是又有常属性，所以我们说 num 是常变量。。可以把const理解为变量的籍贯。
num = 8； //不可以，报错。

//#define 定义的标识符常量
#define MAX 10
int main(){
int arr[MAX] = 10;
return 0;
}

//枚举常量 -- 一一列举
/* 性别：男、女、保密
   星期：1、2、3、4、5、6、7*/
//枚举关键词- enum
enum Sex{
   MALE,//男
   FEMALE，//女
   SECRET//保密
};
//MALE，FEMALE，SECRET--枚举常量  
/*枚举常量不能改，但枚举常量定义的变量可以改*/
int main(){

enum Sex s = FEMALE;

return 0;
}
```

# 字符串
```
"Hello world!";//字符串-由双引号引起来的字符
"";//空字符串
```
## 数组
- 可以存字符串
```
int main(){
char a[] = "abc"; //数组
//"abc"里末尾有\0 -- 字符串的结束标志
char a1[] = {'a','b','c'};
//char a1[] = {'a','b','c',0}; == char a[] = "abc"。
printf("%s\n",a);
printf("%s\n",a1);
return 0;
}
```

![](https://note.youdao.com/yws/api/personal/file/56376A6DF6C244A28EB2C9360908E36A?method=download&shareKey=270116dc17e8b703403d2ae0b4d09f16)

# 转义字符

## \0

**\0只是字符串结束的标志，不是一个数**

```c
int main(){
char a1[] = "abc";
char a2[] = {'a','b','c'};
printf("%d\n",strlen(a1));//strlen - string length-计算字符串长度的。
printf("%d\n",strlen(a2));
return 0;
}
/*打印出来的 值为char a1 = 3；但是char a2 = 随机数（直到遇到随机数\0 结束。*/
```
![](https://note.youdao.com/yws/api/personal/file/15DD6AD77930442AB0C0BAB5D9D36434?method=download&shareKey=5dba9feb8e8294978788444f90af38a6)









