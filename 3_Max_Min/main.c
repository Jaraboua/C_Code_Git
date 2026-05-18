#include <stdio.h>
#include <stdlib.h>
int Max( int Var1 , int Var2 );
int Min( int Var_1 , int Var_2 );

int main()
{
    int Var1 , Var2 ;
    int MAX , MIN ;
    printf("Bitte das erste Variable eingebe:");
    scanf("%d", &Var1 );

    printf( "Bitte das Zweite Variable eingeben:");
    scanf("%d", &Var2 );

    MAX = Max( Var1 , Var2 );

    printf(" Max= %d \n" , MAX );

    MIN = Min( Var1 , Var2 );
    printf(" Min = %d \n", MIN );


    return 0;
}

int Max( int Var1 , int Var2 )
{
    if ( Var1 > Var2 )
        return Var1 ;
    else
        return Var2 ;

}

int Min( int Var_1 , int Var_2 )
{
    if ( Var_1 < Var_2 )
            return Var_1 ;
    else
            return Var_2 ;

}
