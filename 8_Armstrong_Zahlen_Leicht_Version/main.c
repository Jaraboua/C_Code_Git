#include <stdio.h>
#include <stdlib.h>
// Prototyp
int isArmstrong( int num );

int main()
{
    int start , end ;
    printf("Itervall Anfang: ");
    scanf("%d", &start );

    printf("Intervall Ende:");
    scanf("%d", &end );

    if( start > end )
    {
        int swap = start ;
        start = end ;
        end = swap ;
    }

    printf("Armstrong-Zahlen im INtervall[%d ,%d]:\n" , start , end );
         for( int i = start ; i <= end ; i++ )
        {
            if( isArmstrong(i))
            {
                printf("%d\n", i );
            }
        }

    return 0;
}
int isArmstrong( int num )
{
    int original = num ;
    int sum = 0 ;
    int digits = 0 ;
    int temp = num ;
    while( temp > 0 )
    {
        digits++ ;
        temp /= 10 ;
    }
    temp = num ;
    while( temp > 0 )
    {
        int digit = temp % 10 ;
        sum += ( int )pow( digit , digits );
        temp /= 10 ;
    }
    return sum == original ;
}
