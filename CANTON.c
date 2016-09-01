#include <stdio.h>
#include <math.h>
void cantor(long int l)
{   
    if(l==1)
    {
    printf("1/1");
    return;
    }
    double d=sqrt(1+8*l);
    double num=(d-1)/2;
    int n=(int)floor(num);
    double m=floor(num);
    if(num==m)
    n--;
    n++;
    int dis=l-(n*(n-1))/2;
    if(n%2==0)
    {
        int num=dis;
        int dnum=n-dis+1;
        printf("TERM %li IS %d/%d",l,num,dnum);
    }
    else
    {
        int num=n-dis+1;
        int dnum=dis;
        printf("TERM %li IS %d/%d",l,num,dnum);
    }
    printf("\n");
    return;
}
int main(void) {
	// your code goes here
	int t,i;
	long int n;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%li",&n);
	    cantor(n);
	}
}

