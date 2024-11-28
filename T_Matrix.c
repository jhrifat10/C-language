#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    scanf("%d",&n);
    int ar[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
   int  flag=1;
   int sum=0;
   int sum1=0;
  
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
             sum=sum+ar[i][j];
            }
            if(i+j==n-1)
            {
                sum1=sum1+ar[i][j];
            }
            
        }
        
    }
        int a=abs(sum - sum1);

    printf("%d ",a);
   
    
    
    
    return 0;
}