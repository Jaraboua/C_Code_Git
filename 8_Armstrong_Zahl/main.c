#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int isArmstrong( int num );
void printArmstrong( int start , int end );

/*
int Ziffer_Anzahl( int Ziffer );
int iS_Armstrong( int Var );
int power( int X );
*/
int main()

{
    int start , end ;

    printf("Enter lower limit to print armstrng numbers:");
    scanf("%d", &start);

    printf("Enter upper limit to print armstrong numbers:");
    scanf("%d", &end );

    printf("All armstrong numbers between %d to %d are :\n", start , end );
    printArmstrong(start, end );


    /*
    long int untergrenzen , obergrenzen ;
    long double oB_Strong , Var ;
    int Zaehler ;
    int ZiF  ;


    printf("Bitte die beide Zahlen eingeben:");
    scanf("%d%d", &untergrenzen, &obergrenzen );


    for( int i = untergrenzen ; i <  obergrenzen ; i++ )
    {
        Var = i ;
        ZiF = Ziffer_Anzahl( i );
        oB_Strong= iS_Armstrong( Var );
        if( oB_Strong == i  )
        {
            printf( "%d\t  ist eine Armstrong Zahl!\t", i );
            Zaehler++ ;
            printf(" Die Zifern Anzahl %d lautet:\n", ZiF );

        }


    }
    //printf(" Die Zifern Anzahl %d lautet:\n", ZiF );
    printf("Bitte die Anzahl der Armstrong  eigeben:%d\n", Zaehler );


*/


    return 0;
}
int isArmstrong( int num )
{
    int temp , lastDigit , sum ;
    temp = num ;
    sum = 0 ;

    while( temp != 0 )
    {
        lastDigit = temp % 10 ;
        sum += lastDigit * lastDigit *lastDigit*lastDigit ;
        temp /= 10;
    }

    if ( num == sum )
        return 1 ;
    else
        return 0 ;
}
void printArmstrong( int start , int end )
{
    while( start <= end )
    {
        if( isArmstrong(start ))
        {
            printf("%d\n", start );
        }
        start++ ;
    }
}

/*
int Ziffer_Anzahl( int  j  )
{
    int rest  = j ;
    int temp  = 0  ;
    do
    {
        rest /=  10 ;
        temp++;

    }
    while( rest != 0  );

    return temp ;
}
*/


/*
int iS_Armstrong( int Var  )
{


    int rest , temp , Summe = 0  ;

    temp = Var ;

    while( temp != 0 )
    {
        rest = temp % 10 ;// letzter Zoffer holen
        Summe  += pow( rest , 3 );
        temp /= 10;     // letzter Ziffer entfernen
    }


        return Summe ;
}
*/
