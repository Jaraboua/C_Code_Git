#include <stdio.h>
#include <stdlib.h>
int ggV( int Var1 , int Var2 , int i );
int main()
{
    int Var1 , Var2 , Ergebnis ;
    printf("Bitte das erste Variable eingeben:");
    scanf("%d", &Var1 );
    printf("Bitte das ZweiteVariable eingeben:");
    scanf("%d", &Var2 );


    printf("Bitte das Ergebnis zeigen:%d", ggV( Var1 , Var2 , 1));

    return 0;
}

int ggV( int Var1 , int Var2 , int i )
{

    int temp , result  ;
    if( Var1 >= Var2 )
        temp = Var1 ;
    else
        temp = Var2 ;

        if( i > temp )
        {
            return result  ;
        }

    if( (Var1 % i == 0 )  &&( Var2 % i == 0) )
    {
        result = i ;
    }



        return ggV( Var1 , Var2 , i+1 );
}
