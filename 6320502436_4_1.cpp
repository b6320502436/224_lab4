#include<stdio.h>
main()
{
	int a,b=0,c,d,e=1;
	char A[100]={},B[10]={},f;
	scanf("%s",A);
	do
	{
		for(a=0;A[a]!=' ';a++)
		{
			if(B[b]!=A[a])
			{
				B[b+1]=A[a];
				printf("%c-%d ",B[b+1],b+1);
				b++;
			}
			if(A[a+1]==' ')
			{e=0;
			break;}
		}
		
	}while(A[a+1]==' ');
	for(a=1;a<b;a++){
	printf("%c",B[a+1]);}
}
