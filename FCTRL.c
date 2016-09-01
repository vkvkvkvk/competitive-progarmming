#include <stdio.h>
#include <math.h>
void trallingzero(long int n)
{
    int c=0;
    int i=1;
    while(n/(int)pow(5,i)>=1)
    {
        c=c+n/(int)pow(5,i);
        i++;
    }
    printf("%d\n",c);
    return;
}
int main(void) {
	// your code here
    int t,i;
    long int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%li",&n);
        trallingzero(n);
    }
	return 0;
}
