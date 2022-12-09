#include<stdio.h>
int main()
{
	int a,b;
	int c;
	for(a=1;a<1000;a++)
	{
		for(b=1;b<1000;b++)
		{
			for(c=1;c<1000;c++)
			{
				if((c*c)==((a*a)+(b*b)) && a+b+c==1000)
				{
					printf("%d ^2 + %d ^2 = %d ^2 \n",a,b,c);
				}
			}

		}
	}
}
