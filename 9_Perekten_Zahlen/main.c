#include <stdio.h>
#include <stdlib.h>

//Prototyp
int is_Perfekt( int num );

int main()
{
    long int start , end , temp ;
    int Ergebnis ;
    printf("Bitte geben Sie der Anfang des Intervalls:");
    scanf("%d", &start );
    printf("Bitte geben Sie das Ende des Intervalls:");
    scanf("%d", &end);

    if( start > end )
    {
        int tep = start ;
        start = end ;
        end = temp ;

    }

    int j ;
    for( j = start ; j < end ; j++ )
    {
       Ergebnis = is_Perfekt( j );
         if( Ergebnis == j )
            printf("%d ist eine Perfekte Zahl:\n ", j );

    }



    return 0;
}
is_Perfekt( int num )
{
    long int i ;
    int Summe= 0 ;

    for( i = 1 ; i < num  ; i++ )
    {
        if( num % i == 0 )
            Summe += i ;
    }
    return Summe ;
}
