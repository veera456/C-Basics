#include<stdio.h>
void main()
{
	int x=40,y=20;
	x+=y;
	printf("%d %d\n", x,y); 
	x-=y;
	printf("%d %d\n", x,y);
	x*=y;
	printf("%d %d\n", x,y);
	x/=y;
	printf("%d %d\n", x,y);
	x%=y;
	printf("%d %d", x,y);	    
}
