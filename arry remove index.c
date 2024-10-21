#include <stdio.h>
  int ar[1000];
int main() {
  int l;
    scanf("%d",&l);


  for (int i=0;i<l;i++)
  {
      scanf("%d",&ar[i]);
  }
 int re;
 scanf("%d",&re);
 //1 2 3 5 6 7 
 for(int i=re;i<=l-1;i++ )
  {
      ar[i]=ar[i+1];
      
  }
  l--;
  for(int i=0;i<l;i++)
  {
      printf("%d ",ar[i]);
  }

    return 0;
}