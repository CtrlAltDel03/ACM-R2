#include<stdio.h>
int main()
{
	long int a= 13195;
	long int i,k=1;
	int n=0;
	int s=90;
	while (i<=a)
	{
		k=1;
    	n=0;
    	if(a%i==0)
    		{
        	while(k<=i)
            	if(i%k==0)
                	n=n+1;
            	k=k+1;
    		}
        if(n==2)
            s=i;
    	i=i+1;
	}
	printf("%d",s);
}
