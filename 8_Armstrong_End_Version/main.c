#include <stdio.h>
#include <stdlib.h>

//Prototypes
int count_digits( int num );
int power_int( int base, int exponent );
int is_armstrong( int num );
void find_armstrong_numbers( int start , int end );

int main()
{
    int start , end ;

    printf("******************************\n");
    printf("Armstrong-Zahlen Finder in C\n");
    printf("******************************\n");

    printf("Geben Sie den Anfang des INtervalls ein:");
    scanf("%d", &start );
    printf("Geben Sie das Ende des INtervalls ein:");
    scanf("%d", &end );

    find_armstrong_numbers( start , end );


    return 0;
}


int count_digits( int num )
{
    if( num == 0 )
    {
        return 1 ;
    }
    int count = 0 ;
    while( num > 0 )
    {
        count++ ;
        num /= 10 ;
    }
    return count ;
}
int power_int( int base , int exponent ) // mit base ist digit und exponent ist Digits anzahl
{
    int result = 1 ;
    for( int i = 0 ; i < exponent ; i++ )
    {
        result *= base ;
    }
    return result ;
}
int is_armstrong( int num )
{
    int original = num ;
    int digits = count_digits( num );
    int sum = 0 ;

    while( num > 0 )
    {
        int digit = num % 10 ;
        sum += power_int( digit , digits );//
        num /= 10 ;
    }
    return sum == original ;
}
void find_armstrong_numbers( int start , int end )
{
    if( start > end )
    {
        int temp = start ;
        start = end ;
        end = temp ;
    }
    printf("\nArmstrong-Zahlen in Intervall[ %d , %d ]:\n", start , end );
    int found = 0 ;
        for( int i = start ; i <= end ; i++ )
        {
            if( is_armstrong(i))
            {
                printf("%d\n", i );
                found++ ;
            }
        }
        if( found == 0)

            printf("Keine Armstrong-Zahlen gefunden.\n");
            else
            {
                printf("INsgesamt %d Armstrong-Zahl(en).\n", found );
            }

}
