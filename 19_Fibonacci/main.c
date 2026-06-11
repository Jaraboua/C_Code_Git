#include <stdio.h>
#include <stdlib.h>
unsigned long long  Fibonacci( int n );
int main()
{
    int num ;
    unsigned long long fibonacci ;
    printf("Enter any number to find nth Fibonacci term:");
    scanf("%d", &num );
    fibonacci = Fibonacci( num );
    printf("%d Fibonacci term is %llu", num , fibonacci );
    return 0 ;


}


unsigned long long Fibonacci( int num )
{
    if( num == 0 ) // Base Condition
        return 0 ;
    else if ( num == 1 )// Base Condition
        return 1 ;
    else
        return Fibonacci( num - 1 ) +Fibonacci( num - 2 );
}
