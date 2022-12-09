#include<stdio.h>
int main()
{
	int n=2;
	int s=0;
	while(n<2000000)
	{
		int i=1;
		int f=0;
		while(i<=n)
		{
			if(n%i==0)
			{
				f=f+1;

			}
			i++;
		}
			
		if(f==2)
		{
			s=s+n;
		}
		n=n+1;

	}
	printf("%d",s);
}