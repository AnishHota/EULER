#include<stdio.h>
int main()
{
   long long i,j,k=0,n=0;
   for(i=30;k==0;i++)
   {
     n=0;
     for(j=1;j<21;j++)
     {
       if(i%j==0)
         n++;
     }
     if(n==20)
       k=1;
    }
    printf("%lld",i-1);
}
