#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	long long int k;
	int i;
	long long int last;
	long long int first;
	int l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%lli",&k);
	    l=k%4;
	    first=k/4;
	    if(l==1)
	    last=192;
	    else if(l==2)
	    last=442;
	    else if(l==3)
	    last=692;
	    else if(l==0)
	    {
	    last=942;
	    first--;
	    }
	    
	    first=first*1000+last;
	    printf("%lli\n",first);
	}
	return 0;
}

