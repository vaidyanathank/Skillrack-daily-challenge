/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    char a[100][50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=n;i>=0;i--)
    {
        printf("%s",a[i]);
    }

}