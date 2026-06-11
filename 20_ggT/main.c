#include <stdio.h>
#include <stdlib.h>
int ggT( int Var1 , int Var2 , int i, int result  );

int main()
{
    int Var1 , Var2 , Ergebis ;

    printf("Bitte das Erste Variable eingeben:");
    scanf("%d", &Var1 );

    printf("BItte das Zweite Variable eingeben:");
    scanf("%d", &Var2 );

    Ergebis = ggT( Var1 , Var2 , 1 , 0);
     printf("BItte die Ergebnis zeigen:%d\n", Ergebis);




    return 0;
}

int ggT( int Var1 , int Var2 , int i , int result )
{
    int temp = ( Var1 >= Var2 )? Var1 : Var2 ;
    if( i > temp )
    {
        return result ;
    }
    if((Var1 % i == 0 ) && ( Var2 % i == 0 ))
    {
        result = i ;
    }


     return  ggT( Var1 , Var2 , i+1 , result )  ;
}
/*
int ggT( int Var1 , int VAr2 , int i )
{
    int temp , Var3 , Var4 ;
    if( Var1 >= Var2 )
        tempp = Var1 ;
    else
        temp = Var4 ;
    if( i > temp )
    {
        return 0 ;
    }
    if( ( Var1 % i == 0 ) && (Var2 % i ==0 ))
    {
        Var3 = i ;
        Var4 = Var3 ;
    }
    return ggT( Var1 , Var2 , i+1 );
}
*/
/*
int ggT( int Var1 , int Var2 , int i)
{

    int temp , Var3 , Var4 ;
    if( Var1 >= Var2 )
        temp = Var1 ;
    else
        temp = Var2;
if( i == temp )
    {
        return 0 ;
    }


        if( (Var1%i == 0) && (Var2%i == 0) );

    Var3 = i ;
    Var4 = Var3 ;


    ggT( Var1 , Var2 , i+1 );
    return Var4 ;


}
*/
