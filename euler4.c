#include<stdio.h>
void main()
{
	int a,b=100;
	int d,pl;
	int pr,n;
	int n2=909;
	while(a<1000)
	{
		b=a;
		while(b<1000)
		{	
			pr=a*b;
			n=pr;
			pl=0;
			while(pr!=0)
			{
				d=pr%10;
				pr=(pr/10);
				pl=(pl*10)+d;
			}
			if(n==pl)
				n2=n;
			b=b+1;

		}
		a=a+1;
	}
	printf("%d",n2);
}