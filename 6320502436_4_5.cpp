#include<stdio.h>
#include<string.h>
main()
{
	int a,b,c,d,e,B[2][2]={{1,0},{0,0}};
	char A[100]={};
	scanf("%s",&A);
	a=strlen(A);
	for(b=0;b<a;b++)
	{
		if(A[b]=='A')
		{
			c=B[0,1];
			B[0,1]=B[1,0];
			B[1,0]=c;
		}
	}



}

