#include <stdio.h>
#include <stdlib.h>
unsigned long long memo[100];
unsigned long long Fibonacci( int n );
int main()
{
    int num ;
    for( int i = 0 ; i < 100 ; i++ )
        memo[i] = -1 ;
    printf("Enter any number to find nth FIbonacci term :");
    scanf("%d", &num );

    printf("%d Fibonacci term is %llu\n", num , Fibonacci(num));
    return 0;
}

unsigned long long Fibonacci( int n )
{
    if( n == 0 )
        return 0 ;
    if( n == 1 );
        return 1 ;

        if( memo[n] != -1 )
        {
            return memo[n];
        }

        memo[n] = Fibonacci( n - 1 ) + Fibonacci( n - 2 );
        return memo[n];
}
