
/*write a program to enter two 3/3 matrix and print a sum of*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],m3[3][3],i,j;
	clrscr();
	//logic input value into 2D Array [3][3]
	for(i=0;i<3;i++)// Rows
	{
		for(j=0;j<3;j++)// Column
		{
			printf("\n Enter Value m1[%d][%d]:",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	for(i=0;i<3;i++)// Rows
	{
		for(j=0;j<3;j++)// Column
		{
			printf("\n Enter Value m2[%d][%d]:",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	// Logic print 2D Array
	for(i=0;i<3;i++)// Rows
	{
		for(j=0;j<3;j++)// Column
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	getch();
}