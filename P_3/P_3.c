#include <stdio.h>

void up_date (int*x,int*y);

int main()
{
	int x ,y;
	int *px = &x ;
	int *py = &y ;

	fflush(stdin); fflush(stdout);
	scanf("%d",px);
	fflush(stdin); fflush(stdout);
	scanf("%d",py);

	up_date(px,py);

	printf("%d\n",x );
	printf("%d\n",y );

	return 0;
}

void up_date (int*x,int*y)
{
	int sum ,sub ;

	sum = *x + *y ;
	sub = *x - *y ;

	if(sub<0)
	{
		sub = -sub ;
	}

	*x = sum ;
	*y = sub ;
}