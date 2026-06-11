#include <stdio.h>
#include <stdlib.h>

int QuerSumme( int n );

int main()
{
    int Zahl ;
    printf( "Bittte eine Zahl eingeben:");
    scanf("%d", &Zahl);

    QuerSumme( Zahl ) ;
    printf("Bitte die QuerSumme der Zahl %d zeigen %d:" , Zahl , QuerSumme( Zahl ) );

    return 0;
}

int QuerSumme( int N )
{

    if( N == 0 )
    {
        return 0 ;
    }




   return ( N % 10 ) +QuerSumme( N / 10 );

}
