// ����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�\
(ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����) 
 
// int main()
// {
 	int i =0;
 	char password[20]={0};
 	for(i=0;i<3;i++)
 	{
 		printf("����������:>");
 		scanf("%s",password);
 		if (strcmp(password,"123456")== 0) //==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp 
 		{
 			printf("��¼�ɹ�");
 		    break;
		 }	
	 }
	 if(i==3)
	 {printf("����������������˳�����\n");
	 }
	 return 0;
// }

//����������С������� 
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
//?forѭ��������Ϊʲô����ֱ��д��x*3 
//��ӡ3�ı������� 
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
//���������������������������Լ��
//շת����� 
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


//�����ж�
//int main()
//{
	int i ;
	for(i=100;i<200;i++)
	{
		//�ж�i�Ƿ�Ϊ����
		//�����жϵĹ���
		//1.�Գ���
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
	printf("%d\n",sizeof(arr1)); //4  //sizeof()��ռ�ռ��С 
	printf("%d\n",sizeof(arr2)); //3
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",strlen(arr));
	printf("%d\n",strlen(arr1)); //3 //strlen()���ַ������� ��/0ֹͣ 
	printf("%d\n",strlen(arr2)); //3
	return 0;
//} 

//쳲���������
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
	printf("�����%d\n",num);
	printf("ѭ������:%d\n",count);
	return 0;
//}
#include <stdlib.h> //��malloc��free������ͷ�ļ� 
#define InitSize 10  //�궨�� Ĭ����󳤶� 
//����˳��� 
struct SeqList{
	int* data; //��̬���������ָ�� 
	int MaxSize; //˳����������� 
	int Length;  //˳���ĵ�ǰ���� 
};
//////��ʼ��˳��� 
void InitList(SeqList &L){
	L.data=(int*)malloc(InitSize*sizeof(int)); //��malloc��������һƬ�����洢�ռ� 
	L.Length=0;
	L.MaxSize=InitSize; 
	
};
////���Ӷ�̬����ĳ��� 
void IncreaseSize(SeqList &L , int len) {
	int* p=L.data; //ָ��p���˳���data 
	L.data=(int*)malloc((L.MaxSize+len)*sizeof(int));  
	for(int i=0; i<L.Length ; i++)
	{
		L.data[i]=p[i]; //�����ݸ��Ƶ������� 
	}
	L.MaxSize=L.MaxSize+len;  //˳�����󳤶����� len 
	free(p);  //�ͷ�ԭ�����ڴ�ռ� 
}
//int main()
//{
	SeqList L; //����һ��˳��� 
	InitList(L);  //��ʼ��˳��� 
	IncreaseSize(L,5);  //��˳����������뼸��Ԫ�� 
//}
//ʵ�٣�˳���Ĳ����ɾ�� 
//������˳����"��̬����"ʵ�ַ�ʽ�ϣ�"��̬����"Ҳ��ͬ��
#define Maxsize 10
struct Sqlist{
	int* data;
	int length;

}; 
////��ʼ��˳��� 
void InitList(Sqlist &L){
	L.data=(int*)malloc(Maxsize*sizeof(int)); //��malloc��������һƬ�����洢�ռ� 
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
	printf("��СֵΪ%d\n:",value);
	printf("��Сֵ�±�Ϊ%d\n",pos);
	return 0;
//}

//int main(){
	int arr[3][2]={{1,2},{3,4},{4,6}};
	int arr1[1][2]={2,56};
	printf("%s\n",arr1);
	return 0; 
//} 
//ʵ������ 
void buble_sort(int arr[],int sz)
{   
  //ȷ��ð����������� 
	for(int i=0;i<sz-1;i++)
	{   
	    int flag=1; //������һ��Ҫ����������Ѿ����� 
      //ÿһ��ð������ 
		for(int j=0;j<sz-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag =0;  //���������������ʵ����ȫ���� 
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

//ʵ������ 
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
