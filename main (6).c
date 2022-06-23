/* proggram to print the maximum element in row and the column in an nxn matrix*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,a[100][100],max,max1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
    }
    for(i=0;i<n;i++)
    {
        max1=a[i][0];
        
            for(j=0;j<n;j++)
            {
                if(max1<a[i][j])
                {
                    max1=a[i][j];
                }
            }
            printf("%d ",max1);
    }
        printf("\n");
        for(i=0;i<n;i++)
        {
            max=a[0][i];
            for(j=0;j<n;j++)
            {
                if(max<a[j][i])
                {
                    max=a[j][i];
                }
            }
            printf("%d ",max);
        }
    
}