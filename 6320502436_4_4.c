#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i=0;
    char B[1000];
    scanf("%[^\n]",B);
    char* A=strtok(B," ");
    while(A!=NULL)
    {
        if(i==0)
        {
            printf("%c",toupper(A[0]));
        }
        else
        {

            if(strcmp(A,"i")!=0&&strcmp(A,"of")!=0&&strcmp(A,"the")!=0&&strcmp(A,"on")!=0&&strcmp(A,"at")!=0&&strcmp(A,"for")!=0
                &&strcmp(A,"with")!=0&&strcmp(A,"a")!=0&&strcmp(A,"an")!=0&&strcmp(A,"in")!=0&&strcmp(A,"and")!=0)
            {
                printf("%c",toupper(A[0]));
            }
        }
        i=1;
        A=strtok(NULL," ");
    }

}
