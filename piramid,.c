

#include <stdio.h>

int main()
{
    int n,s,c;
    scanf("%d",&n);
    s=n-1;
    c=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        
        for(int j=1;j<=c;j++)
        {
            printf("*");
        }
        if (i<=n-1)
        {
            s--;
            c=c+2;
        }
        else 
        {
          s++;
          c=c-2;
            
        }
        
        printf("\n");
    }
    
    
    

    return 0;
}