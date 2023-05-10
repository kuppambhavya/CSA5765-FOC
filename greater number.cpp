#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter the values of a&b&c&d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	{
		if(a>b,a<c,a<d)
		{
			printf("a is greater than b,c,d",a);
		}
		else(b>a,b>c,b>d)
		{
			printf("b is greater than a,c,d",b);
		}
		else if(c>a,c>b,c>d)
		{
			printf("c is greater than a,b,d",c);
		}
		elif(d>a,d>b,d>c)
		{
			printf("d is greater than a,b,c",d);
		}
	}
}