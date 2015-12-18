#include<stdio.h>
int palindrome(int);
int main()
{
   int i,j,max=0;
   for(i=999;i>100;i--)
   {
     for(j=999;j>100;j--)
     { 
       if(palindrome(i*j)&&max<i*j)
         max=i*j;
      }
    }
   printf("%d",max);
}
int palindrome(int x)
{
   char s[6];
   sprintf(s,"%d",x);
   if(s[5]==s[0]&&s[4]==s[1]&&s[3]==s[2])
     return 1;
    else 
		return 0;
}
