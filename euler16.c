#include<stdio.h>
#include<math.h>
int main()
{
	double s=pow(2,1000);
	int d=0;
	while(s>0)
	{
		d=d+(int)(s%(10));
		s=(s/10);
		
	}
	printf("%d",d);
}