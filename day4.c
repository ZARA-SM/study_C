//指针
//int main()
//{
//	int a =10; //4个字节 
	int* p =&a;//取地址  用变量p存放地址-指针变量 
//	printf("%p\n",&a); 
//	printf("%p\n", p);
	*p = 20; //* -解引用操作符
//	printf("a= %d\n",a); 
//	return 0; 
// } 
//int main()
//{
   char ch ='w';
   char* x = &ch;
   *x = 'x';
   printf("%c\n",ch);
//   return 0;
//}
//int main()
//{
   printf("%d\n",sizeof(char *));
   printf("%d\n",sizeof(short *));
   printf("%d\n",sizeof(int *));
   printf("%d\n",sizeof(double *));
//   return 0;
//}
//结构体 
struct book
{
	char name[30];
	short price;
	char author[30];
};
//int main()
//{
	struct book b1 ={"C语言程序设计",60,"www"};
	printf("书名:%s\n",b1.name);
	printf("价格:%d元\n",b1.price);
	printf("作者:%s\n",b1.author);
    return 0;
//}
#include <string.h> 
//struct student
//{
//	char name[30];
//	short age;
//	char sex[10];
//	char id[10]; 
//};
//int main()
//{
	
	struct student a1 ={"龚自珍",22,"女","20220404"};
//	a1.age =20;
//	strcpy(a1.name,"文天祥"); //strcpy-string copy -字符串拷贝-库函数-string.h 
	struct student* b = &a1;
	printf("姓名：%s\n",b ->name);
	printf("年龄：%d\n",b ->age);
	printf("性别：%s\n",b ->sex);
	printf("学号：%s\n",b ->id);
//	printf("姓名:%s\n",(*b).name);
//	printf("价格:%d\n",(*b).age);
//	printf("性别为:%s\n",(*b).sex);
//	printf("学号为:%s\n",(*b).id);
//	return 0; 
	
//}
//int main()
//{   int _a =20;
//	int* str=&_a;
////	str[0] = "\0";
//	printf("%p\n",str);
// } 
//int main()
//{
//	char str[1]={'\0'};
//	char* str1 =&str[1];
//	printf("%p\n",str1);
//	return 0;
//}
//第一次写(别扭死了 奇数不会表示吗？_？) 
//int main()
//{    
    int i=1;
	while(i<=100){
	
	    if ((i%2) == 0);
	      
	    else
          {
          	i++;
	      printf("%d\n",i);
		  }
		  i++;    
//	   }
//	   
//	return 0;
//	
// } 
//int main()
//{
	int i =1;
	while(i<=100)
	{
		if(i%2==1)
		printf("%d ",i);
		i++;
//	 } 
//}
//switch_case
//int main()
//{
	int day = 0;
	scanf("%d",&day);
	switch(day)
	{
		case 1:
	    case 2:
	    case 3:
		case 4:	 
	    case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break; 
//	}
//	return 0;
//}
//int main()
//{
//	int i=0;
//	while(i<10)
//	{   
//      	 i++;
//	    if(i==5)
//		 continue; 		
//		printf("%d ",i);
//	}
//	return 0;
//}
//int main()
//{   
    int a = 0;
	int b = 2;
	if(a ==1 ){
	   if (b=2)
	    printf("hehe\n");}
	else
	   printf("haha\n");
	    
	int ch =0;
	while((ch=getchar())!=EOF)//End Of File -> -1 文件结束标志 
	{
		if (ch<'0' || ch >'9')
		continue;
		putchar(ch);
	}
    printf("%d\n",'\n');
	
	return 0;
//}
//for循环 
//int main()
//{
	 int i =0;
	 //初始化 判断 调整 
	 for(i=1;i<=10;i++)
	 {
	 	printf("%d",i);
	 }
	 return 0;
//}
//int main()
//{
	int i =0;
	int j =0;
    int i ,j;
	for(;i<10;i++)
     { 
  		int j=0;
		for (;j<10;j++)
		{
			printf("hehe\n");
		}
	}
	for(;;)//判断部分 如果被省略 则恒为真 
	{
		printf("hehe\n");
//	}
	 int i;
	// 初始化 判断 调整 
	 for(i=1;i<=10;i++)
	 {  
	    if(i==5)
	     continue;
	 	printf("%d", i);
	 }
    int i;
    while(i<=10)
    {  
	 if(i==5)
      continue;
      i++; 
      printf("%d",i);
	}
	 return 0;
// }
//int main()
//{
//	int i =0;
//	int k =0;
//	for(i=0,k=0;k==2;i++,k++)
//	   k++;
//	   printf("%d",k);
//	return 0;
// } 
//阶乘 相加 
int main()
{    
     int n =0;
	 int ret =1;
	 int sum =0;
	 for(n=1;n<=10;n++)
	 {
	 	ret = ret*n;
	 	sum = sum +ret;
	  } 
	 printf("%d",sum); 
    return 0;
//}

//int main()
//{
	int arr[]={1,2,3,4,5,6,7};
	int k =6;
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[1]);
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("找到了，下标是：%d\n",i);
			break;
		}
		if(i==sz)
		{
			printf("找不到\n"); 
		 } 
	}
	return 0;
//	printf("%d",arr[1]);
//}
//log2 N 查找
//有序列表 查找数字 
//int main()
//{
	int arr[]={1,2,3,4,5,6,7,8};
	int sz = sizeof(arr)/sizeof(arr[0]);//计算元素个数 
	printf("%d",sizeof(arr));
//演示多个字符从两端移动,向中间汇聚
// 
//    int main()
//    {
    	char arr[]="welcome to bit!!!";
    	char arr1[]="#################";
    	int left =0;
    	int right = strlen(arr1)-1;
    	while(left<=right)
		{
    		arr1[left]= arr[left]; 
	    	arr1[right] = arr[right];
	    	printf("%s\n",arr1);
	    	//休息一秒
			Sleep(1000); 
			//执行系统命令的一个函数cls -清空屏幕 
			system("cls");
	    	left++;
	    	right--;
		}
		printf("%s\n",arr1); 
		return 0;    	
//	}

