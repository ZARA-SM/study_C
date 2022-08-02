#include <stdio.h>
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
			score[k]=score[i];
			score[i]=tmp1;
			tmp2=num[k];
			num[k]=num[i];
			num[i]=tmp2;
		 } 
	}
}

int main()
{
	
}
