#include <stdio.h>
#include <stdlib.h>
// Prototyp
int count_digit( int num );
int is_armstrong( int num );
void find_armstrong_numbers( int start , int end );

int main()
{
    int start , end ;
    printf("******************************************\n");
    printf(" Armstrong-Zahlen Finder in C\n");
    printf("*******************************************\n");

    printf("Geben Sie den Anfang des Intervalls ein:");
    scanf( "%d", &end );
    printf("Geben Sie das Endedes Intervalls ein: ");
    scanf("%d", &end );

    // Stelle sicher, dass start >= end

    if( start > end )
    {
        int temp = start ;
        start = end ;
        end = temp ;
        printf("\n Intervall getauscht: [%d , %d ] \n", start , end );

    }


    find_armstrong_numbers( start , end );



    return 0;
}

//Defenition
int count_digit( int num )
{
    if( num == 0 )  return 1 ;
        int count = 0 ;
            while( num > 0 )
            {
                count++ ;
                num /= 10 ;
            }
    return count ;
}

int  is_armstrong( int num )
{
    int original = num ;
        int num_digits = count_digit( num );
            int sum = 0 ;

                while( num > 0 )
                {
            int digit = num % 10 ;
        sum += pow( digit , num_digits );
    num /= 10 ;

                }
    return sum == original ;


}
void find_armstrong_numbers( int start , int end )
{
    int armstrong_count = 0 ;
    printf("\n---Armstrong-Zahlen im Intervall[%d, %d]== \n", start , end );
    printf("Suche laeuft...\n\n");

    for( int i = start ; i <= end ; i++ )
    {
        if( is_armstrong(i)){ armstrong_count++ ;}
    }
    if( armstrong_count == 0 ){ printf("Keine Armstrong-Zahlen:\n");
        return ;
    }

    printf("Gefundene Armstrong-Zahlen:\n");
        for( int i = start ; i <= end ; i++ )
        {
            if( is_armstrong(i))
            {
                int num_digits = count_digit(i);
                int temp = i ;
                int sum = 0 ;
                printf("%d:", i );
                // Berechnung anzeigen
                while( temp > 0 )
                {
                    int digit = temp % 10 ;
                    sum += pow( digit , num_digits );
                    temp /= 10 ;
                }
                // Detailierte Berechnung
                temp = i ;
                int first = 1 ;
                while( temp > 0 )
                {
                    int digit = temp % 10 ;
                    if( !first) printf(" + ");
                    printf("%d%d", digit , num_digits );
                    first = 0 ;
                    temp /= 10 ;
                }
                printf("= %d\n", sum );

            }
        }

        printf("\nGesamt: %d Armstrong-Zahl(en) gefunden.\n", armstrong_count );
}
