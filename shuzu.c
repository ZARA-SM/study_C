#include <stdio.h>
//����Ͳ��� 
/*����
	1��������
	2��ѡ�� 
*/ 
//������ �Գɼ��������� 
void DataSort1(int score[] ,int n) //���������� 
{
	int i ,j ,tmp;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(score[i]<score[j]) //�Ӹߵ��� 
			 {
			 	tmp =score[i];
			 	score[i] = score[j];
			 	score[j] =tmp;
			 	
			 }
		}
	}
}
//ѡ��
void DataSort2(int score[] ,long num[],int n)
{
	int i,j,k,tmp1;
	long tmp2;
	for(i=0;i<n-1;i++)
	{
	    	k=i;
	    //�ҵ����������ֵ�±� 
		for(j=i+1;j<n;j++)
		{
			if(score[j]>score[k])
			{
				k=j;  //��¼������±�λ�� 
			}
			
		}
		if(k!=i)  //������������±�λ��i 
		{
			tmp1=score[k];
			score[k]=score[i];  //�ɼ���Ϣ���� 
			score[i]=tmp1;
			tmp2=num[k];
			num[k]=num[i]; //ѧ����Ϣ���� 
			num[i]=tmp2;
		 } 
	}
}
//���ҷ�  
/*
  1��˳�����(���Բ���) Linear 
  2���۰����(�Է�����) Binary 
*/ 
 
//˳����� 
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
//�۰����  (ǰ��:������ �������) 
/*
8��Ԫ�صĻ����۰������Ҫ3�Σ�pow(2,3)=8
1024��Ԫ�صĻ����۰������Ҫ10�Σ�pow(2,10)=1024 
*/ 
int BinarySearch(int num[],int x,int n)
{
	int low,high,mid;
	low=0;
	high=n-1;
//	mid =(low+high)/2;//���ܴ������
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
//����ÿ��ѧ�����ֺܷ�ƽ����
#define COURSE_N 8
void AverageForStu(int score[][COURSE_N],int sum[],float avg[],int n)
{
	int i ,j;
	for(i=0,i<n,i++) //�ȱ���ÿ��ѧ�� 
	{
		sum[i]=0;
		for(j=0;j<COURSE_N;j++)  //����ÿ�ſγ� 
		{
			sum[i]=sum[i]+score[i][j];
		}
		avg[i]=(float)sum[i]/COURSE_N;
	}
 } 
//����ÿ�ſγ̵��ֺܷ�ƽ����
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
//³�������ͷ
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
        printf("³�����ڵ�%d��λ��", i);
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
//  printf("�����ѯid:");
//  scanf("%ld",&x);
//  pos = LinearSearch(num,x,n);
//  if(pos != -1)
//  {
//  	printf("score=%d\n",score[pos]);
//   } 
//   else
//   {
//     printf("û�ҵ�\n");
//   }
//   return 0;
  int x,n;
  printf("������������:"); 
  scanf("%d",&x);
  LinSearch(num,x,n);
  BinarySearch(num,x,n);
  lu(queue,99)
  return 0;	
}

