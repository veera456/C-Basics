#include<stdio.h>
void main()
{
	//variable declaration
	int phy, che, mat, eng, tot;
	
	//initialization
	phy = 60;
	che = 50;
	mat = 70;
	eng = 95;
	
	//calculation
	tot = phy + che + mat + eng;
	
	//output
	printf("marks in physics  :%d\n", phy);
	printf("marks in chemistry:%d\n", che);
	printf("marks in maths    :%d\n", mat);
	printf("marks in english  :%d\n", eng);
	printf("total marks       :%d\n", tot);
}
