#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int marks;
	printf ("enter your obtained marks  ");
scanf("%d" , &marks );

if (marks>=80 && marks<=100 )
{
	printf(" cgpa 4.00\n");
}
else if (marks>=75 && marks<=79 )\
{
	printf(" cgpa 3.75\n");
}
else if (marks>=70 && marks<=75 )
{
	printf(" cgpa 3.50\n");
}
else if (marks>=65 && marks<=70 )
{
	printf(" cgpa 3.25\n");
}
else if (marks>=60 && marks<=65 )
{
	printf(" cgpa 3.00\n");
}
else if (marks>=55 && marks<=60 )
{
	printf(" cgpa 2.75\n");
}
else if (marks>=50 && marks<=55 )
{
	printf(" cgpa 2.5\n");
}
else if (marks>=45 && marks<=50 )
{
	printf(" cgpa 2.25\n");
}
else if (marks>=40 && marks<=45 )
{
	printf(" cgpa 2.00\n");
}
else if (marks>=0 && marks<=39 )
{
	printf(" cgpa 0.00\n");
}

return 0 ;
}
