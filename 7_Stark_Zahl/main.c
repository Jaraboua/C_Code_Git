#include <stdio.h>
#include <stdlib.h>
int fakultaaet( int n )
{
    int f = 1;
    for( int i = 1 ; i <= n ; i++ )
    {
        f *= i ; // f = f * i ;
    }
    return f ;
}

int main()
{
    int zahl , temp , rest , summe = 0 ;

    printf("Zahl eingeben:");
    scanf("%d", &zahl );

    temp = zahl ;
    while( temp > 0 ) // schleife läft solange temp grösser als 0 ist.
    {
        rest = temp % 10 ;   // letzte Ziffer holen
        summe += fakultaaet( rest ); // fakultaet der Ziffer berechnen
        temp /= 10 ;                // letzte Ziffer entfernen
    }

    if( summe == zahl )
        printf("STarke Zahl\n");
    else
        printf("Keine Starke Zahl!\n");

    return 0;
}

