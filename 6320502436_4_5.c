#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,d,e,B[2][2]={{1,0},{0,0}},f;
	char A[100]={};
	scanf("%d",&d);
	
while(d>=0)
	{
	 B[0][0]=1;
        B[0][1]=0;
      B[1][0]=0;
       B[1][1]=0;
	scanf("%s",&A);
	a=strlen(A);
	for(b=0;b<a;b++)
	{
		if(A[b]=='A')
		{
			c=B[0][1];
			B[0][1]=B[1][0];
			B[1][0]=c;
		}
		else if(A[b]=='B')
		{
			c=B[0][0];
			B[0][0]=B[1][1];
			B[1][1]=c;
		}
		else if(A[b]=='C')
		{
			c=B[0][0];
			B[0][0]=B[1][0];
			B[1][0]=c;
			c=B[0][1];
			B[0][1]=B[1][1];
			B[1][1]=c;
		}
		else if(A[b]=='D')
		{
			c=B[0][0];
			B[0][0]=B[0][1];
			B[0][1]=c;
			c=B[1][0];
			B[1][0]=B[1][1];
			B[1][1]=c;
		}else if(A[b]=='E')
		{
			c=B[0][1];
			B[0][1]=B[1][0];
			B[1][0]=c;
			c=B[0][0];
			B[0][0]=B[1][1];
			B[1][1]=c;
		}
		
	}
	if(B[0][0]==1)
	{
		printf("1\n");
	}
	if(B[0][1]==1)
	{
		printf("2\n");
	}
	if(B[1][0]==1)
	{
		printf("3\n");
	}
	if(B[1][1]==1)
	{
		printf("4\n");
	}
	d--;
}

}

