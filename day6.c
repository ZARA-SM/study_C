//所有数组名都表示数组首元素的地址
//除了sizeof(数组名)是计算整个数组的大小，sizeof内部单独放一个数组名，数组名表示整个数组
//除了 &数组名 ，取出的是数组的地址。&数组名，数组名表示整个数组 
//int main()
//{
	int arr[]={1,3,6,8,0};
	printf("%s\n",arr);
	printf("------------------\n");
	printf("①%p\n",arr);
	printf("②%p\n",&arr);
	printf("③%p\n",&arr[0]);
	printf("④%p\n",arr+1);
	printf("⑤%p\n",arr[0]);
	printf("⑥%s\n",arr[0]);
    printf("⑦%p\n",arr[0]+1);	 
    printf("⑧%p\n",arr[1]);
//}
//按位或 | 
//相应二进制位有一个位1，则该结果为1，否则为0 
//int main(){
//  int a,b=1;
  b = a|(1<<2);
//  printf("b=%d\n",b);
//  return 0; 
//}
////按位与 & 
////相应二进制位都有1，则该位的结果值为1，否则为0； 
//int main()
//{
//	int a =2;
//	int b =4;
	printf("c=%d\n",a&b);
//	return 0;
//}
//按位异或 ^
//int main()
//{
//	int a =2;
//	int b=5;
    printf("c=%d\n",a^b);
// } 
//int main()
//{
	int i=0,res=0,a=0;
	scanf("%d",&a);
	for(i;i<a;i++)
//	{
		int m = pow(2,i);
		printf("m=%d\n",m);
		res += m;
		printf("res=%d\n",res);
//	}
// } 
//int main()
//{   //注意是字符串char 只保留一个字节(即8个比特位)  
//	char a= 1;
//	char b=128;
//	//字符串相加，输出确实整型事，空间不够时，会进行“整型提升”，即把字符串的一个字节按符号位数字(0 or 1)往前补齐,提升至整型int的4个字节，再进行相加，然后再进行补码转反码，反码转原码的运算。 
	printf("res=%d\n",a+b);
// } 

//指针数组 (存放指针的数组)
//int main()
//{
	int a= 10;
	int* p =&a;
	printf("%p\n",p);
	printf("%d\n",*p);
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,3,4,5,6};
    int arr3[5]={3,4,5,6,7};
    int* arr[]={arr1,arr2,arr3};
    int i = 0;
    for(i=0;i<3;i++){
    	int j = 0;
    	for(j=0;j<5;j++)
    	{    
//    	    int ret=*(arr[i]+j);
    	    printf("%d",*(arr[i]+j));
		}
		
		printf("\n");
//		
//	}
//	
//    
//    
//	
// }
 
//指针数组 --存放指针的数组 
//数组指针 --存放数组的指针 (存放数组地址) vs字符指针 --存放字符的指针 (存放字符地址)  vs整型指针 --存放整型的指针(存放整型地址) 

int* p1[10] //指针数组
int(*p1)[10]  //数组指针  ()括号来区分优先级 
//int main()
//{
	char* arr[5];//创建数组
	char* (*pa[5])= &arr; //存放数组的指针 前者char*表明存储的数组中的元素是指针类型 后者(*pa[5])表明创建的是数组指针pa，存放5个元素 
// } 

//&arr 和 arr 的不同
//int main()
//{
	int a[10]={0};
	printf("%p\n",a);   //指向数组首元素地址 
 	printf("%p\n",&a);   //指向数组地址 
	printf("%p\n",a+1); //指向数组首元素地址后的下一个元素地址 
	printf("%p\n",&a+1); //指向数组地址的下一个数组地址 
// } 
//&arr表示的是数组的地址，而不是数组首元素的地址。&数组的地址+1，跳过整个数组大小，所以&arr+1相对于&arr的差值是40 



//int main()
//{
	int arr[6]={1,2,3,4,5};
	int (*pa)[6] =&arr;
	int i =0;
	for (i=0;i<5;i++)
	{
		printf("%d",(*pa)[i]);
//		printf("%d",*(*pa+i)); //*pa == arr
	}
// } 
////数组打印(常用款) 
//void print(int arr[3][5],int x,int y)
//{
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
//	}
//}
////二维数组  [行][列] --行可以省略 ，列不可以省略 
//int main()
//{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print(arr,3,5);
	return 0;
// } 

////字符指针
//int main()
//{
	char ch ='w';
	char* p =&ch;
	printf("%c",*p);
//}


//指针进阶(数组指针、指针数组) 
            //[]和*的优先级 ：[] > * 
int arr[5]; //arr是整型数组 含5个元素 每个元素的类型是int* 
int* arr1[5]; //arr1是数组 含5个指针元素 ，arr1是指针数组(存放指针的)
int (*arr1)[5]; //arr1是指针  该指针指向一个数组，含5个元素 ，每个元素类型是int ，arr1是数组指针 (存放数组的)
int (*arr1[5])[5] //arr1是数组 arr1[5]--含有5个元素<数组指针>的数组 ; int(* )[5]--数组指针  含5个元素<int> 

//p存地址，*p存内容， %p打印地址， %d打印整型， 
//数组指针 --指向数组的指针

//函数指针 --指向函数的指针 (存放函数地址的指针)
//例1 
int Add(int x, int y)
{
	int z=0;
	z= x+y;
}
int main()
{
	int a= 10;
	int b= 9;
	int (*pa)(int,int) =Add;  //函数指针   //此时Add和&Add含义一致，函数不存在首元素地址 
	printf("%d",(*pa)(2,3));  //(*pa)(x,y) 
	return 0;
 }
 //函数指针 
 //例2
 void Print(char* str)
 {
 	printf("%s",str);
 	
 }
 int main()
 {
    void (*p)(char*)= Print;
	(*p)("hello"); 
    return 0;
  } 
