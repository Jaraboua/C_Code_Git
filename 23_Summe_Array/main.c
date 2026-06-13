#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100
int Array_Summe( int arr[ ], int start  , int Ende  );
int main()
{
    int start , Ende , Summe = 0 , Size ;
    int arr[ MAX_SIZE ];
    printf("Bitte die Size Array eingeben:");
    scanf("%d", &Size) ;

    printf("Bitte Array Element eingeben:");
    for( int i = 0 ; i <= Size ; i++)
    {
        scanf("%d" , &arr[i]);
    }

    Summe = Array_Summe( arr , 0 , Size );
    printf("Summe of array Element:%d", Summe );

    return 0 ;
}

int Array_Summe( int arr[], int start , int Ende )

{
    if( start > Ende )
    {
      return 0 ;
    }


    return ( arr[start] +  Array_Summe(  arr , start +1 , Ende ) );
}
