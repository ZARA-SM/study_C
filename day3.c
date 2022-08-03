//int main()
//{
//	移(二级制位操作符)位操作符
//	<< 左移
//	>> 右移
	int a =1;
	int b =a<<2;
	printf("%d\n",b);   
//}
//int main()
//{   
//位操作符运算 
    short f=2;
    short f1[4] ={0};//4个短整型元素的数组 
    short zs =0;
    zs = sizeof(f1)/sizeof(f1[0]);
	int a=2;
	int b=3;
	int c=a&b;  
	int d=a|b;
	int e = a^b;
	printf("%d\n",zs);
	printf("%d\n",sizeof(f1));
	printf("%d\n",sizeof(f));
	printf("%d\n",c);
	printf("%d\n",d); 
	printf("%d\n",e);
//}
//int num =10;
//int main()
//{
//	int num=1;
//	printf("%d\n",num);
// } 
//int Max(int a,int b){
//	if(a<b) 
////	printf("%d\n",a);
//       return a;
//	else
////	printf("%d\n",b);
//       return b;
//
//}
//int main(){
//	int a =20;
//	int b= 30;
//	int max =0;
//	max =Max(a,b);
//	printf("max=%d\n",max);
////	return 0;
//}
//int main()
//{
	int a=10;
	int b=a++;//后置++，先使用，再++ 
	printf("a=%d, b=%d\n",a,b);
	return 0;
// } 
// int main()
//{
	int a=10;
	int b=++a;//前置++，先++，后使用 
	int c=10;
	int d=c++;//后置++，先使用，再++ 
    int e=11;
    int f=e--;
    int g=11; 
    int h=--   g;
	printf("a=%d, b=%d\n c=%d,d=%d\n e=%d,f=%d\n g=%d,h=%d",a,b,e,f,g,h);
	return 0;
// } 
//int main()
//{
	int a=3, b=2;
	int c=--a ,d=b++;
	printf("c=%d..,d=%d",c,d);

   int num=7 , sum=7;
   sum = num++ ,sum++,++num; //逗号运算符 
   printf("%d",sum);
     char s[6]={"ABCDE"};
   return 0 ; 
//}
//int main(){
	int a= (int)3.14;
	printf("a=%d\n",a);
//}
// int main()
// {
// 	
 	int a = 20;
 	int b = 30;
 	int max =(a<b? a:b);
 	printf("max=%d\n",max);
// }

//int main()
//{
	int arr[10] ={0,12,45,4,2,4};
	arr[2];//[]下标引用操作符 
	printf("arr[2]=%d\n",arr[2]);
	return 0;
//	
//}

//int Max(int x ,int y)
//{
	int z =0;
	z = x+y;
	return z;
//}
//int main(){
	int a =20;
	int b=10;
	int num =Max(a,b);
	printf("num=%d\n",num); 
//	return 0;
//}

//int main()
//{
	typedef unsigned long mu;
	unsigned int a= 20;
	mu b=40.0;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
//	
//}
//int a =0;
//int test()  
//{
	static int a= 0; //a是一个静态的局部变量 
	a++;
	printf("a=%d\n",a);
//}
//int main()
//{ 
	int i =0;
	while(i<5)
	{   
		i++;
		test();
	}
	return 0;
//}
//void test(){
    static	int a =1;
	a++;
	printf("a=%d\n",a); 
//}
//int main(){
	int i = 0;
	while(i<2)
	{
		test();
		i++;
//	}
//} 
#define MAX 100 //标识符常量 
// int main()
// {
 	int a = MAX;
 	return 0;  //终止main()函数，并返回值0 
 	printf("a=%d\n",a);
// }
//宏定义
#define Max(a,b) (a>b? a:b) //三目运算符 
//函数定义 
int Max(int x, int y)
{
    if(x>y)
	  return x;
	else 
	  return y;	
}
//int main()
//{
//	int a =10;
//	int b =20;
//	//函数
	int max=Max(a,b);
	printf("max=%d\n",max); 
//	//宏的方式 
	int max =Max(a,b);
	printf("max=%d\n",max);
//	return 0;
//	
// } 
