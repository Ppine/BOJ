#include<stdio.h>

int main()
{
	int a,b,time=0;
	scanf("%d %d",&a,&b);
	if(b>=45) 
	{
		b-=45;
		printf("%d %d",a,b);
		return 0;
	}
	if(a==0 && b<45)
	{
		a=23;
		b+=15;
	}
	else if(a!=0 && b<45)
	{
		b+=15;
		a--;
	}
	printf("%d %d",a,b);
	return 0;	
	
}