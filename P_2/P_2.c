#include <stdio.h>

void max_of_four (int n1 , int n2 , int n3 , int n4);

int main()
{
	int n1 , n2 , n3 , n4 ;

	fflush(stdin); fflush(stdout);
	scanf("%d",&n1);
	fflush(stdin); fflush(stdout);
	scanf("%d",&n2);
	fflush(stdin); fflush(stdout);
	scanf("%d",&n3);
	fflush(stdin); fflush(stdout);
	scanf("%d",&n4);

	max_of_four(n1,n2,n3,n4);
	return 0;
}

void max_of_four (int n1 , int n2 , int n3 , int n4)
{
	if(n1>n2 && n1>n3 && n1>n4)
	{
		printf("%d\n",n1);printf("\n");
	}

	else if(n2>n1 && n2>n3 && n2>n4)
	{
		printf("%d\n",n2);printf("\n");
	}

	else if(n3>n2 && n3>n1 && n3>n4)
	{
		printf("%d\n",n3);printf("\n");
	}

	else
	{
		printf("\n%d",n4);
	}
}

