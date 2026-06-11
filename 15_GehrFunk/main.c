#include <stdio.h>
#include <stdlib.h>
int reversed = 0 ;
void reverseNumber( int n );
void reverseNumber_P( int n , int *reverrsed );
int main()
{
    int number = 12345 ;
    reverseNumber( number );
    printf("UMkehrung von %d ist: %d \n", number , reversed );

    //************************************************

    int reversed = 0 ;

    reverseNumber_P( number , &reversed );
    printf("Umgehrung von %d ist: %d \n", number , reversed );
    return 0;
}
void reverseNumber( int n )
{
    //*************************************************
    if( n == 0 )
    {
        return ;
    }

    int digit = n % 10 ; //Letzte Ziffer extrahieren

    reversed  = reversed * 10 +digit ; //Reversed Zahl aufbauen

    reverseNumber( n / 10 );  //rekursive Aufrunf mit n / 10
    //********************************************************



}
void reverseNumber_P( int n , int *reversed )
{
    if( n == 0 )
    {
        return ;
    }
    int digit = n % 10 ; // entferner die Letzte Ziffer
    *reversed = *reversed * 10 + digit ;
    reverseNumber_P( n/10 , reversed );
}
