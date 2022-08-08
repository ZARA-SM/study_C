#include <stdio.h>
//排序和查找 
/*排序
	1、交换法
	2、选择法 
*/ 
//交换法 对成绩降序排序 
void DataSort1(int score[] ,int n) //交换法排序 
{
	int i ,j ,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(score[i]<score[j]) //从高到低 
			 {
			 	tmp =score[i];
			 	score[i] = score[j];
			 	score[j] =tmp;
			 	
			 }
		}
	}
}
//选择法
void DataSort2(int score[] ,long num[],int n)
{
	int i,j,k,tmp1;
	long tmp2;
	for(i=0;i<n-1;i++)
	{
	    	k=i;
	    //找到数组中最大值下标 
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[k])
			{
				k=j;  //记录最大数下标位置 
			}
			
		}
		if(k!=i)  //若最大数不在下标位置i 
		{
			tmp1=score[k];
			score[k]=score[i];  //成绩信息交换 
			score[i]=tmp1;
			tmp2=num[k];
			num[k]=num[i]; //学号信息交换 
			num[i]=tmp2;
		 } 
	}
}
//查找法  
/*
  1、顺序查找(线性查找) Linear 
  2、折半查找(对分搜索) Binary 
*/ 
 
//顺序查找 
int LinSearch(int num[],int x,int n)
{
	int i;

	for(i=0;i<n;i++)
	{
		if(num[i]==x)
		printf("%d",i);
		//return i; 
	}
	return 0;
 } 
//折半查找  (前提:先排序 升序或降序) 
/*
8个元素的话，折半查找需要3次，pow(2,3)=8
1024个元素的话，折半查找需要10次，pow(2,10)=1024 
*/ 
int BinarySearch(int num[],int x,int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
//	mid =(low+high)/2;//可能存在溢出
    mid=low+(high-low)/2 ;
	while(low<=high)
	{
	  if(num[mid]<x)
	  {
	  	 low=mid+1;
	  }
	  else if(num[mid]>x)
	  {
	  	 high=mid-1;
	   } 
     else
     {
     	return mid; 
	 }
	}
    return 0;	
}
//计算每个学生的总分和平均分
#define COURSE_N 8
void AverageForStu(int score[][COURSE_N],int sum[],float avg[],int n)
{
	int i ,j;
	for(i=0,i<n,i++) //先遍历每个学生 
	{
		sum[i]=0;
		for(j=0;j<COURSE_N;j++)  //遍历每门课程 
		{
			sum[i]=sum[i]+score[i][j];
		}
		avg[i]=(float)sum[i]/COURSE_N;
	}
 } 
//计算每门课程的总分和平均分
void AverageForCourse(int score[][COURSE_N],int sum[],float aver[],int n)
{
	int i ,j;
	for (j=0;j<COURSE_N;j++)
	{
		sum[j]=0;
		for(i=0;i<n;i++)
		{
			sum[j]=sum[j]+sum[i][j];
		}
		aver[j]=(float)sum[j]/n; 
	}
 } 
//鲁智深吃馒头
int lu(int queue[],int num )
{

	int flag = 0;
	for (int i=1; num>0; i++)
	{
	    if (queue[i] == 0)
	    {
	        flag++;
	        if (flag == 5)
	        {
	            queue[i] = 1;
	            num--;
	            flag = 0;
	        }
	    }
	    if (i == 100)
	    {
	        i = 0;
    }
}
for (int i=1; i<=100; i++)
{
    if (queue[i] == 0)
    {
        printf("鲁智深在第%d个位置", i);
        break;
    }
}
	
 } 
#define N 9
int main()
{ 
  int num[N]={1,2,3,4,5,7,8,9,};
  int queue[100]={0};
//  int n,pos;
//  long num[N],x;
//  n =ReadScore(score,num);
//  printf("输入查询id:");
//  scanf("%ld",&x);
//  pos = LinearSearch(num,x,n);
//  if(pos != -1)
//  {
//  	printf("score=%d\n",score[pos]);
//   } 
//   else
//   {
//     printf("没找到\n");
//   }
//   return 0;
  int x,n;
  printf("输入所需内容:"); 
  scanf("%d",&x);
  LinSearch(num,x,n);
  BinarySearch(num,x,n);
  lu(queue,99)
  return 0;	
}

