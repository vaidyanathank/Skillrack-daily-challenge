/* Accept an integer N as the input. The program must print the pattern as shown in the Example Input/Output section below.

Boundary Condition(s):
1 <= N <= 50

Input Format:
The first line contains the value of N.

Output Format:
The first three lines contain the desired pattern.

Example Input/Output 1:
Input:
3

Output:
*******
*1*2*3*
*******

Example Input/Output 2:
Input:
5

Output:
***********
*1*2*3*4*5*
***********

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,k;
    
    scanf("%d",&n);
    int a=n+n+1;
    for(i=0;i<3;i++)
    {
        if(i==1)
        {  printf("*");
            for(k=1;k<=n;k++)
            {
                printf("%d",k);
            
            printf("*");
            }
            printf("\n");
        }
        else
        {
            for(j=0;j<a;j++)
            {
                printf("*");
                
        }
        printf("\n");
        
    }
    
    }
}