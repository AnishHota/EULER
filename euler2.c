#include<stdio.h>
int main()
{
   int a=1,b=2,s=0;
   int c=0;
   while(c<4000000)
   {
     c=a+b;
     if(c%2==0)
       s+=c;
     a=b;
     b=c;
    }
   s+=2;
   printf("%d",s);
  return 0;
}
