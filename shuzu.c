#include <stdio.h>
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
