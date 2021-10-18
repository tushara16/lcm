#include<stdio.h>
int lcm(int,int);
main()
{
	int a,b;
	printf("enter first no.");
	scanf("%d",&a);
	printf("enter second no.");
	scanf("%d",&b);
	printf("lcm of a and b is %d",lcm(a,b));
}
int lcm(int a,int b)
{
	static int m=0;
	m=m+b;
	if(m%a==0 && m%b==0)
	return m;
	return lcm(a,b);
}
