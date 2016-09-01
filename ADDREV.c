#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int reversesum(int a, int b)
{
    int c;
    int d;
    int sum;
    int rsum;
    int i=1;
    c=a%10;
    d=b%10;
    while(a/(int)pow(10,i)!=0)
    {
        c=c*10+(a%(int)pow(10,i+1))/pow(10,i);
        i++;
   }
   i=1;
   while(b/(int)pow(10,i)!=0)
    {
        d=d*10+(b%(int)pow(10,i+1))/pow(10,i);
        i++;
   }
   sum=c+d;
   rsum=sum%10;
   i=1;
   while(sum/(int)pow(10,i)!=0)
    {
        rsum=rsum*10+(sum%(int)pow(10,i+1))/pow(10,i);
        i++;
   }
    return rsum;
}
int main()
{
   int y;
   int x;
   int n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d %d",&x,&y);
   int sum=reversesum(x,y);
   printf("%d\n",sum);
   }
    return 0;
}
