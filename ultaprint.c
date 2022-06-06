#include<stdio.h>
int main()
{
    int n,k,l;
    scanf("%d",&n);
   while(n!=0)
   {
       l=n%10;
       if(l==2 || l==9)
       {printf("%d",l+1);}
       else{printf("%d",l);}
         n=n/10;

   }
}
