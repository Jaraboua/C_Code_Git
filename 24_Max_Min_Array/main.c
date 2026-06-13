#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#define MAX_SIZE 100
//void Min_Max_Array( int arr[], int start , int end , int *Min , int *Max );
int Find_Min( int arr[], int start , int end , int current_min );
int Find_Max( int arr[], int start , int end , int current_max );

typedef struct{
    int min ;
    int max ;

} MinMax ;
MinMax  Min_Max_Array( int arr[], int start , int end , int current_min , int current_max )
{
    MinMax result ;
    if( start > end )
    {
        result.min = current_min ;
        result.max = current_max ;
        return result ;
    }
    if( current_min > arr[start])
        current_min = arr[start];
    if( current_max < arr[start])
        current_max = arr[start];

    return Min_Max_Array( arr , start+1 , end , current_min , current_max );
}

int main()
{
    int N ;
    printf("Bitte geben Sie die Size Element ein:\n");
    scanf("%d", &N );
    int arr[N];

    printf("Bitte geben Sie die Array Element ein:");
    for( int i = 0 ; i < N ; i++ )
    {
        scanf("%d", &arr[i]);
    }

    MinMax result = Min_Max_Array( arr , 0 , N-1 , INT_MAX , INT_MIN );
    printf("array:");
    for( int i = 0 ; i < N ; i++ )
        printf("%d", arr[i]);
    printf("\nMinimum:%d\n", result.min);
    printf("\nMaximum:%d\n", result.max);
    return 0 ;



/*
    int N ;
    printf("Bitte geben SIe die Size Elemenet ein:\n");
    scanf("%d", &N);
    int arr[N];
    printf("Bitte geben Sie die Array Eleemnt ein:\n");
    for( int i = 0 ; i < N ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    int min = Find_Min( arr , 0 , N-1 , INT_MAX );
    int max = Find_Max( arr , 0 , N-1 , INT_MIN );

    printf("Array:");
    for( int i = 0 ; i < N ; i++ )
    {
        printf("%d,\t", arr[i]);
    }
    printf("\nMinimum: %d\n", min );
    printf("\nMaximum: %d\n", max );
    return 0 ;
/*
    int N ;
     printf("Bitte geben Sie die SIze Element ein:\n");
     scanf("%d", &N) ;
     int arr[N] ;


    printf("Bitte geben Sie die Array Element ein:\n");

    for( int i = 0 ; i < N ; i++ )
    {
        scanf("%d", &arr[i]);
    }
    int n = sizeof( arr ) / sizeof( arr[0]);

    int Min = INT_MAX ;
    int Max = INT_MIN ;

    Min_Max_Array( arr , 0 , n-1 , &Min , &Max );

    printf("Array:");
    for( int i = 0 ; i < n ; i++ )
    {
        printf("%d", arr[i]);
    }

    printf("\n");
    printf("Minimum: %d\n", Min );
    printf("Maximum: %d\n", Max );
    return 0;
    */
}
int Find_Min( int arr[], int start , int end , int current_min )
{
    if( start > end )
        return current_min ;
    if( current_min > arr[start])
        current_min = arr[start];
    return Find_Min( arr , start+1 , end , current_min );
}

int Find_Max( int arr[], int start , int end , int current_max )
{
    if( start > end )
    {
        return current_max ;
    }
    if( current_max < arr[start])
        current_max = arr[start];

    return Find_Max( arr , start+1 , end , current_max );
}
/*
void Min_Max_Array( int arr[] , int start , int end , int *Min , int *Max )
{
    if( start > end )
    {
        return  ;
    }

    if( *Min > arr[start])
    {
        *Min = arr[start];
    }
    if( *Max < arr[start])
    {
        *Max = arr[start];
    }

    Min_Max_Array( arr , start+1 , end , Min, Max );

}

*/
