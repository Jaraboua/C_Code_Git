#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getDiameter( double radius );
double getCircumference( double radius );
double getArea( double radius );

int main()
{
    double radius , Diameter , circ, area  ;
    printf("Bitte geben Sie das Radius ein:\n ");
    scanf("%lf", &radius);

    Diameter = getDiameter( radius );
    circ     = getCircumference( radius);
    area     = getArea( radius );

    printf("Diameter:%f\n", Diameter);
    printf("circ:%lf\n", circ );
    printf(" area:%lf\n", area );



    return 0;
}

double getDiameter( double radius )
{
    return radius * 2 ;
}
double getCircumference( double radius )
{
   return( 2 * M_PI * radius );
}
double getArea( double radius )
{
    return( M_PI * radius * radius );
}
