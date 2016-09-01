#include <stdio.h>
void cards(float a)
{
    int i=2;
    float sum=0.00;
    float x=1.00;
    while(sum<a)
    {
        sum=sum+x/i;
        i++;
    }
    printf("%d card(s)\n",i-2);
}
int main(void) {
	// your code goes here
	float n;
	scanf("%f",&n);
	while(n!=0.00)
	{
	    cards(n);
	    scanf("%f",&n);
	}
	return 0;
}

