#include <stdio.h>
#include <stdlib.h>
// Aufgabe 5 , Gerade und Ungerade Zahlen sortieren

int GE_UN( int Var );
int main()
{
    int Variable , Endergebnis ;
    printf("Bitte ein Zahl eingeben:");
    scanf( "%d", &Variable );

    Endergebnis = GE_UN( Variable );

    if ( Endergebnis == 0 )
        printf( " Der Variable %d ist gerade!" , Variable ) ;
    else
        printf( " Der Variable %d ist Ungerade! " , Variable ) ;


    return 0;
}

int GE_UN( int Var )
{
    if   ( Var % 2 == 0 )
        return 0 ;
    else
        return 1 ;
}
