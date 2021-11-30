#include<stdio.h>
int main()
{
   int i=0;
   int n=0;
   int ret=1;
   scanf("%d",&n);           //输入n的值，若输入的为7，则1*2*3*4*5*6*7
   for(i=1;i<=n;i++)
   {
	   ret=ret*i;
   }
   printf("%d\n",ret);
   return 0;
}

	
