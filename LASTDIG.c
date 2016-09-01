#include <stdio.h>
void last(int a, long int b)
{
    if(a==0)
    {
        printf("%d\n",0);
        return;
    }
    if(b==0)
    {
      printf("%d\n",1);
      return;
    }
    int arr[100];
    int i,j;
    int m=a%10;
    int l=a%10;
    i=0;
    do
    {
        arr[i]=m;
        i++;
        m=m*l;
        m=m%10;
    }while(l!=m);
    j=b%i;
    if(j==0)
    {
        printf("%d\n",arr[i-1]);
        return;
    }
   printf("%d\n",arr[j-1]);
   return;
}
int main(void) {
	// your code goes here
	int t,a,i;
	long int b;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&a);
	    scanf("%li",&b);
	    last(a,b);
	}
	return 0;
}

