#include <stdio.h>

int main() {
char str[20];
int n;
scanf("%d",&n);
 
scanf("%s",str);

int num=0;
for(int i=0;i<n;i++)
{
    
   int value=str[i] - '0';
   if(value>=0 && value<=9)
{
        num= num *10 + value;

}
else 
{
    break;
}
}
printf("%d\n",num);

    return 0;
}