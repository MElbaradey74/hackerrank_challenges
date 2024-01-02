#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int   n1 , n2 ;
    float n3 , n4 ;

    fflush(stdin); fflush(stdout);
    scanf("%d %d",&n1,&n2);

    fflush(stdin); fflush(stdout);
    scanf("%f %f",&n3,&n4);


    printf("%d %d\n",n1+n2 ,n1 - n2);

    printf("%.01f %.01f",n3 + n4,n3 - n4);
    return 0;
}
