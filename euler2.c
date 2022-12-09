#include<stdio.h>
int main()
{
	int i=1;
	int j=2;
	long int s=0;
	int f;
	while(j<4000000)
	{
		if(j%2==0)
		{
			s=s+j;
		}
		f=j;
		j=i+j;
		i=f;

	}
	printf("%ld",s);
}