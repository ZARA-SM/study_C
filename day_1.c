//����һ����stdio.h���ļ�
// std-��׼ standard input output 
#include <stdio.h>
#include<cstring>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
//int ����ֵ 
//mainǰ���int ��ʾmain��������֮�󷵻�һ������ֵ 
//char-�ַ����� 
int main()//������ -�������� -����ֻ��һ�� 
 {
 	//�����������
	//����Ļ�����hello world
	//����-print f(unction)-��ӡ���� 
	//�⺯��-C���Ա����ṩ������ʹ�õĺ���
	//�ñ��˶���-���к�
	//#include 
	//short int -������
	//long int -������
//	long num =100;
//  float f =5.0;
//    double d =3.14;
//	int age =20;
//	float young =11.3;
////	printf("%lf\n",d);
////	char ch ='A';  
//// 	printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������ 
////	printf("%d\n",age); //%d--��ӡ����ʮ�������� 
//// 	return 0;//���� 0 
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
int num1 = 10;//ȫ�ֱ���-�����ڴ����({})֮��ı��� 
int main()
{
	int num1 = 20;//�ֲ����� - �����ڴ����({})֮�ڵı���
	//���ֲ�������ȫ�ֱ���������ͬ��ʱ�򣬾ֲ��������� 
	printf("%d\n",num1) ;
	return 0;
//}
//int main()
//{
//	//����2�����ĺ�
//	int num1 =0;
//	int num2 =0;
//	int sum =0; 
//	//��������-ʹ�����뺯��
	scanf("%d%d",&num1,&num2);//ȡ��ַ����&
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�� 	
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//}

//int main()
//{
	//�ֲ������������� 
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
//{   //Ϊ�����ı�ʶ��
   // ���� extern --�����ⲿ���� 
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
   const int num =4;//n�ǳ������������ǳ����ԣ���������˵n�ǳ����� 
////   printf("%d\n",num);
////	 
////}
//define����ı�ʶ������ 
#define MAX 10
int main(){
	int arr[MAX] = {0,11,35};
	printf("%d\n",MAX);
	return 0;
}
