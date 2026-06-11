#include <stdio.h>
#include <stdlib.h>
int reversed = 0 ;
int reverseNumber( int n );
int main()
{
    int original ,Reversed  ;
    printf("Bitte geben Sie ein Zhal ein:");
    scanf("%d", &original );

    Reversed = reverseNumber( original );
    if( original == Reversed )
       printf("Die Zahl %d ist Palindrom", original ) ;
    else
     printf("Die Zahl %d ist Keine Palindrom", original ) ;



    return 0;
}
int reverseNumber( int n )
{
    int digit ;
    if( n == 0 )
    {
        return ;
    }
     digit = n % 10 ;
     reversed = reversed * 10 + digit ;
     reverseNumber( n / 10 );

     return reversed ;

}
