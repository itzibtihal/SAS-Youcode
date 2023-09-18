#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float mn;
    float x1, x2, y1, y2;
    printf(" entrer les coordonn�es de point M (x1,y1): ");
    scanf("%f", &x1);
    scanf("%f", &y1);

    printf(" entrer les coordonn�es de point N (x2,y2): ");
    scanf("%f", &x2);
    scanf("%f", &y2);

    mn=sqrt((pow((x2-x1),2))+(pow((y2-y1),2)));
    printf(" la distance entre le point M et N est %f", mn);

    return 0;
}
