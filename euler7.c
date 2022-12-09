#include<stdio.h>
void main()
{
	int i,n;
	i=1;
	n=1;
	int o;
	while(n<=10001)
	{
		int k=1;
		int f=0;
		while(k<=i)
		{
			if(i%k==0)
				f=f+1;
			k=k+1;
		}
		if(f==2)
		{
			o=i;
			n=n+1;
		}
		i=i+1;
	}
	printf("%d",o);
}