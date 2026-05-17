#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int Durchmesser( int durchmesser ) ; // Durchmesser Funktion
float Umfang ( int umfang );        // Umfang Funktion
float Kreis_Flaesche( int KF );    //  Kreisflaeche Funktion

int main()

{
    int radius , durchmesser  ;
    float kreisflaesche , umfang ;

    printf(" Bitte das Radius eingeben: ");
    scanf("%d", &radius );

    durchmesser = Durchmesser( radius );
    printf("%d durchmesser:\n", durchmesser );

    umfang = Umfang( radius );
    printf("%.3f Umfang:\n", umfang );

    kreisflaesche = Kreis_Flaesche( radius );
    printf("%.3f Kreisflaeche:", kreisflaesche );




    return 0;
}

    int Durchmesser( int r )
{
     return  r * 2 ;
}
    float Umfang( int rad )
{
    return  2 * M_PI * rad ;
}

    float Kreis_Flaesche( int rad )
{
    return 2 * M_PI * rad * rad ;
}
