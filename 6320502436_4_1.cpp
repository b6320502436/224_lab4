#include<stdio.h>
#include<string.h>
main()
{
	int a,b=0,c,d,e=1,g;
	char A[100]={},B[10]={},f;
	scanf("%s",A);
	g=strlen(A);
	do
	{
		for(a=0;a<=g;a++)
		{
			if(B[b]!=A[a])
			{
				B[b+1]=A[a];
				//printf("%c-%d ",B[b+1],b+1);
				b++;
			}
			
		}
		
	}while(a<g);
	for(a=0;a<=b;a++){
	printf("%c",B[a+1]);}
}
