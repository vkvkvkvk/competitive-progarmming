#include <stdio.h>
void ap(long long int a, long long int b, long long int sum)
{
    long long int n,d,a1;
    n=(2*sum)/(a+b);
    d=(b-a)/(n-5);
    a1=a-2*d;
    long long int i;
    printf("%lli\n",n);
    for(i=0;i<n;i++)
    {
        printf("%lli ",a1+i*d);
    }
    printf("\n");
    return;
}
int main(void) {
	// your code goes here
	int t,i;
	long long int a,b,sum;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%lli",&a);
	    scanf("%lli",&b);
	    scanf("%lli",&sum);
	    ap(a,b,sum);
	}
	return 0;
}

