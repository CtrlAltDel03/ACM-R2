#include<stdio.h>
int main()
{
	long int i=1;
	long int t=0;
	int d=0;
	while (d<500)
	{
		d=0;
		t=0;
		for(long int n=1;n<=i;n++)	
			{
				t=t+n;
			}
		for(long int n=1;n<=t;n++)
		{
			if(t%n==0)
			{
				d++;
			}
		}
		i=i+1;
	}
	printf("%ld",t);
}