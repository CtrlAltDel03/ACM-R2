#include<stdio.h>
int main()
{
	int s=0;

	for(int i=1;i<1000;i++)
	{
		if(i%3==0)
		{
			s=s+i;
		}
		else if(i%5==0)
		{
			s=s+i;
		}

	}
	printf("%d",s);
}