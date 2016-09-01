#include <stdio.h>
#include <math.h>
void behivee(long int t)
{  
    double n,m;
    double d=sqrt(1+4.0*(t-1.0)/3.0);
    n=(d-1)/2;
    m=ceil(n);
    if(m==n)
    printf("Y\n");
    else
    printf("N\n");
}
int main(void) {
	// your code goes here
	long int n;
	while(1)
	{
	    scanf("%li",&n);
	    if(n==-1)
	    break;
	    behivee(n);
	}
	return 0;
}

