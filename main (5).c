/*Given N integers as input, add successive pair of elements and repeat the process until a single digit sum value is obtained. Input format :The first line contains the value of N.
The second line contains the N integer values separated by a space.
Output format:
The first line contains the single digit sum value.Boundary condition
 :2 <= N <= 20Example Input/Output 1:
Input:51 2 3 4 5
Output:3
Explanation : 1 2 3 4 5 3 5 7 9 8 12 16 20 28 48 
1+2=3,
2+3=5,
3+4=7,
4+5=9
 Then 3+5=8,5+7=12,7+9=16Then 8+12=20,12+16=28 Then 20+28=48, 4+8=12 Finally, 1+2=3.Example Input/Output 2:Input:4 1 6 2 9Output:7Explanation :1 6 2 9 7 8 11 15 19 34 1+6=7,6+2=8,2+9=11 Then 7+8=15, 8+11=19 Then 15+19=34 Finally, 3+4 = 7*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],dup[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        dup[i]=arr[i];
    }
    while(n>=1){
        for(int i=0;i<n-1;i++){
            dup[i]=arr[i]+arr[i+1];
        }
        n--;
        for(int i=0;i<n;i++){
            arr[i]=dup[i];
        }
    }
    int a=arr[0],sum=0;
 while(a>=10){
     sum=0;
    while(a){
        int b=a%10;
        sum+=b;
        a/=10;
    }
    a=sum;
 }
    printf("%d",sum);

}