// 代码实现，模拟用户登录情景，并且只能登录三次。\
(只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序) 
 
// int main()
// {
 	int i =0;
 	char password[20]={0};
 	for(i=0;i<3;i++)
 	{
 		printf("请输入密码:>");
 		scanf("%s",password);
 		if (strcmp(password,"123456")== 0) //==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp 
 		{
 			printf("登录成功");
 		    break;
		 }	
	 }
	 if(i==3)
	 {printf("三次密码均错误，请退出程序\n");
	 }
	 return 0;
// }

//将三个数从小到大输出 
//int main()
//{
	int a=0,b=0,c=0;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
	  	int tmp = a;
	  	a = b;
	  	b= tmp;
	}
	if(a<c)
	{   
	    int tmp = a; 
		a =c;
	    c =tmp;
		}
	if(b<c)
	{
		int tmp =b;
		b = c;
		c =tmp;
	   }   
	 printf("%d %d %d",a,b,c);
	 return 0;
//}
//?for循环调整处为什么不能直接写成x*3 
//打印3的倍数的数 
//int main()
//{
	int x=1;
	for(x=1;x<100;x++)
	{   
	     if(x%3==0)
		printf("%d\n",x);
	}
	return 0;
//}
//给定两个数，求这两个数的最大公约数
//辗转相除法 
//int main()
//{
	int a,b,c;
	scanf("%d%d",&a,&b);
	while(a%b)
	{
	   c=a%b;
	   a=b;
	   b=c;
	 }
	 printf("%d\n",b); 
	
	return 0;
// } 


//素数判断
//int main()
//{
	int i ;
	for(i=100;i<200;i++)
	{
		//判断i是否为素数
		//素数判断的规则
		//1.试除法
		int m ;
		for(m=2;m<i;m++)
		{
			if(i%m == 0)
			{
				break;
			}
		 } 
		 if(m==i)
		 {
		 	printf("%d\n",i);
		 }
	}
	return 0;
// } 
// 


//int main(){
//	char arr[]="abc";
	char arr1[]="abc";
	char arr2[]={'a','b','c'};
	printf("%d\n",sizeof(arr1)); //4  //sizeof()所占空间大小 
	printf("%d\n",sizeof(arr2)); //3
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",strlen(arr));
	printf("%d\n",strlen(arr1)); //3 //strlen()求字符串长度 到/0停止 
	printf("%d\n",strlen(arr2)); //3
	return 0;
//} 

//斐波那契数列
int count =0;
int fib(int n)
{   
//    if(n==3)
//    count ++;		
//	if(n<3)
//	  return 1;
//	else
//	  return fib(n-1)+fib(n-2);
    int a =1;
    int b =1;
    int c =1;
    
    while(n>2)
    {
    	c= a+b;
    	a = b;
    	b = c;
        n--;	
	}
	return c;
//    
//}
//int main()
//{
	int n =0;
	long long num =0;
	scanf("%d",&n);
	num = fib(n);
	printf("输出：%d\n",num);
	printf("循环次数:%d\n",count);
	return 0;
//}
#include <stdlib.h> //含malloc、free函件的头文件 
#define InitSize 10  //宏定义 默认最大长度 
//声明顺序表 
struct SeqList{
	int* data; //动态分配数组的指针 
	int MaxSize; //顺序表的最大容量 
	int Length;  //顺序表的当前长度 
};
//////初始化顺序表 
void InitList(SeqList &L){
	L.data=(int*)malloc(InitSize*sizeof(int)); //用malloc函数申请一片连续存储空间 
	L.Length=0;
	L.MaxSize=InitSize; 
	
};
////增加动态数组的长度 
void IncreaseSize(SeqList &L , int len) {
	int* p=L.data; //指针p存放顺序表data 
	L.data=(int*)malloc((L.MaxSize+len)*sizeof(int));  
	for(int i=0; i<L.Length ; i++)
	{
		L.data[i]=p[i]; //将数据复制到新区域 
	}
	L.MaxSize=L.MaxSize+len;  //顺序表最大长度增加 len 
	free(p);  //释放原来的内存空间 
}
//int main()
//{
	SeqList L; //声明一个顺序表 
	InitList(L);  //初始化顺序表 
	IncreaseSize(L,5);  //往顺序表中随便插入几个元素 
//}
//实操：顺序表的插入和删除 
//建立在顺序表的"静态分配"实现方式上，"动态分配"也雷同。
#define Maxsize 10
struct Sqlist{
	int* data;
	int length;

}; 
////初始化顺序表 
void InitList(Sqlist &L){
	L.data=(int*)malloc(Maxsize*sizeof(int)); //用malloc函数申请一片连续存储空间 
	L.length=0;
//	L.MaxSize=Maxsize; 

};
bool Listinsert(Sqlist &L,int i ,int e)
{  if(i<1 || i>L.length+1)
      return false ;
   else if (i>=Maxsize)
      return false ;
   else 
      for(int j=L.length;i<=j;j--)
      {
	    L.data[j]=L.data[j-1];
	  }
	  L.data[i-1]=int e;
	  L.length++;
       
}
//int main()
//{
	Sqlist L;
	InitList(L);
	Listinsert(L,3,3);
	return 0;
//}

#define initsize 10
struct sqlist{
	int
};
#define maxsize 10
struct Sqlist
{
	int data[maxsize]={16,58,77,94,4,9,5};
	int length=7;
 } ;
 int pos =0 ;
bool count(Sqlist &L,int value)
{   
    
    value = L.data[0];
	for(int i=0;i<=L.length;i++)
	{
	    if(L.data[i]<value)
	     value = L.data[i];
	     pos =i;
	};
	L.data[i]=L.data[L.length-1];
	L.length--;
	return true;
};
int main()
{  
	Sqlist L;
	count(L,0);
	printf("最小值为%d\n:",value);
	printf("最小值下标为%d\n",pos);
	return 0;
//}

//int main(){
	int arr[3][2]={{1,2},{3,4},{4,6}};
	int arr1[1][2]={2,56};
	printf("%s\n",arr1);
	return 0; 
//} 
//实现升序 
void buble_sort(int arr[],int sz)
{   
  //确定冒泡排序的趟数 
	for(int i=0;i<sz-1;i++)
	{   
	    int flag=1; //假设这一趟要排序的数据已经有序 
      //每一趟冒泡排序 
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag =0;  //本趟排序的数据其实不忘全有序 
			}
			
		}
		if (flag==1)
		{
		  break;
		}
	}
 } 
//int main()
//{
    int arr[]={1,3,5,6,8,9,10,0};
	int sz=sizeof(arr) / sizeof(arr[0]); 
	buble_sort(arr,sz);
	int i =0;
	for(i=0;i<sz-1;i++)
	{
		printf("%d",arr[i]); 
	}
	return 0;
//}

//实现升序 
void buble_sort(int arr[],int sz)
{
	int  i =0;
	int j=0;
	for (i=0;i<sz-1;i++)
	{
		
		for (j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			};
		}
	}
 }
int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int sz=sizeof(arr)/sizeof(arr[0]); 
//	printf("%d",sizeof(arr));
	int i =0;
	buble_sort(arr,sz);
	for(i=0;i<sz;i++)
	{
		printf("%d\n",arr[i]);
	}
	
}
