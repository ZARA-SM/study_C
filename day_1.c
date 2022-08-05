//包含一个叫stdio.h的文件
// std-标准 standard input output 
#include <stdio.h>
#include<cstring>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//int 整型值 
//main前面的int 表示main函数调用之后返回一个整型值 
//char-字符类型 
int main()//主函数 -程序的入口 -有且只有一个 
 {
 	//这里完成任务
	//在屏幕上输出hello world
	//函数-print f(unction)-打印函数 
	//库函数-C语言本身提供给我们使用的函数
	//用别人东西-打招呼
	//#include 
	//short int -短整型
	//long int -长整型
//	long num =100;
//  float f =5.0;
//    double d =3.14;
//	int age =20;
//	float young =11.3;
////	printf("%lf\n",d);
////	char ch ='A';  
//// 	printf("%c\n",ch);//%c--打印字符格式的数据 
////	printf("%d\n",age); //%d--打印整型十进制数据 
//// 	return 0;//返回 0 
 }
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}
int num1 = 10;//全局变量-定义在代码块({})之外的变量 
int main()
{
	int num1 = 20;//局部变量 - 定义在代码块({})之内的变量
	//当局部变量和全局变量名字相同的时候，局部变量优先 
	printf("%d\n",num1) ;
	return 0;
//}
//int main()
//{
//	//计算2个数的和
//	int num1 =0;
//	int num2 =0;
//	int sum =0; 
//	//输入数据-使用输入函数
	scanf("%d%d",&num1,&num2);//取地址符号&
//	//C语言语法规定，变量要定义在当前代码块的最前面 	
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
	//局部变量的作用域 
	{int num =0;
	printf("num = %d\n",num);
	}
	
	return 0;
}
int global = 200; 
void test()
{
	printf("test()-- %d\n",global);

}
//
//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//}
//int main()
//{   //为声明的标识符
   // 声明 extern --声明外部符号 
    extern int g;
//	printf("g= &d\n",g);
//	return 0;
//}
int add(int x, int y)
{
	int z=x+y;
	return z;
}
int main()
{
	int num1 =0;
	int num2 =0;
	int sum = 0;
    scanf("%d%d",&num1,&num2);
//    sum = num1 + num2;
    sum = add(num1,num2);
    printf("sum=%d\n",sum);
	return 0;
}
////int main()
////{  int n = 10;
////   int arr[n] = {0};
   const int num =4;//n是常量，但是又是常属性，所以我们说n是常变量 
////   printf("%d\n",num);
////	 
////}
//define定义的标识符常量 
#define MAX 10
int main(){
	int arr[MAX] = {0,11,35};
	printf("%d\n",MAX);
	return 0;
}
