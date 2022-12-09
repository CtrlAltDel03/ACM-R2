#include<stdio.h>
int main()
#define True=1
{
	int i=1;
	int t=0;
	int d=0;
	while (d<500)
	{
		d=0;
		t=0;
		for(int n=1;n<=i;n++):
			{
				t=t+n;
			}
		for(int n=1;n<=t;n++)
		{
			if(t%n==0)
			{
				d++;
			}
		}
		
	}
	printf("%d",t);
}