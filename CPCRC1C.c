#include <stdio.h>
#include <math.h>
long long int sum[10];
long long int presum[10];
void excute()
{
   int i;
   sum[1]=45;
   for(i=2;i<=9;i++)
   {
       sum[i]=sum[i-1]*10 + 45*pow(10,i-1);
   }
   for(i=1;i<=9;i++)
   {
       presum[i]=presum[i-1]+i;
   }
   return;
}
long long int mostd(long long int n)
{
    long long int i;
    while(n>0)
    {
        i=n;
        n=n/10;
    }
    return i;
}
long long int count(long long int n)
{   
    if(n<=9)
    {
        return presum[n];
    }
    int d=(int)log10(n);
    long long int msd=mostd(n);
    long long int summation=0;
    summation=msd*sum[d]+((msd*(msd-1))/2)*(long long int)pow(10,d);
    summation+=msd*(n%((long long int)pow(10,d))+1);
    summation+=count(n%((long long int)pow(10,d)));
    return summation;
}

int main()
{
    long long int a,b;
    excute();
    while(1)
    {
       scanf("%lli",&a);
       scanf("%lli",&b);
       if(a==-1 && b==-1)
       break;
    printf("%lli\n",count(b)-count(a-1));
    }
    return 0;
}
