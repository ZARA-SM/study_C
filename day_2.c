//ö�ٳ���
//ö�ٹؼ��� -enum
enum Sex
{
	MALE,
	FEMALE,
	SECRET,
 } ;
//int main()
//{  
   enum Sex s = MALE;
   printf("%d\n",MALE);
   printf("%d\n",FEMALE);
   printf("%d\n",SECRET);
   return 0; 
// } 
enum COLOR	{
	RED,
	BLUE,
	PINK,
};
//int main()
//{
	enum COLOR color = BLUE;
	return 0; 
// } 
//int main()
//{
	char a1[] = "abc";//����
	char a2[] = {'a','b','c'};
	printf("%s\n",a1); 
	printf("%s\n",a2);
	return 0;
//}
#include<cstring>
//int main()
//{
	char a2[]="abc";
	char a3[]={'a','b','c'};
	printf("%d\n",strlen(a2));
	printf("%d\n",strlen(a3));
	return 0;
//}
////int main()
////{
	printf("abc\n");//\n���� 
	printf("c:\test\32\test.c") ;//\tˮƽ�Ʊ�� 	
	return 0;
////}
////int main()
////{
	printf("c:\\test\\32\\test.c");
	printf("\n");
	printf("%c\n",'b');
	printf("%c\n",'$');
	return 0;
////}
////int main()
{   printf("c:\test\32\test.c");
    printf("\n");
    printf("c:\\test\\32\\test.c");
    printf("\n");
	printf("%d\n",strlen("c:\test\32\test.c"));
	printf("\132");
	printf("\n");
	printf("%c\n",'\32');
	printf("\n");
	printf("%c\n",'\x61');
	return 0;
////}
////int main()
////{	
	int input = 0; 
	printf("�����ѧ");
	printf("��Ҫ�ú�ѧϰ��?(1/0)>:");
	scanf("%d",&input);
	if(input == 1)
	  printf("��offer\n");
	else
	  printf("�ؼ�") ;
////	return 0;
////}
//int main()
//{ 
	int line = 0;
	while(line<20)
	{
	  printf("��Ҫ�ô���:%d\n",line);
	  line++;
	}
	if(line>=20)
	 printf("����Ҫȥ����");
	return 0;
//}	 
//int main()
//{
	int arr[5] = {1,2,3,4,5};//����һ�����5�����ֵ����� 
//	char ch[2];
//	float fl[8];
    int i=0;
    while(i<6)
    {
    	printf("%d",arr[i]);
    	i++;
	}
	printf("%d\n",arr[3]);
	return 0;
//}
//int main()
//{
	 int a=5%2;
	 printf("%d\n",a);
	 return 0;
//}
