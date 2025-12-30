#include <stdio.h>

void swap_values( int *a , int *b ) ;

int main() {
    int num1 ;
    int num2 ;

    printf( "Enter value for Num1: " ) ;
    if ( scanf( "%d" , &num1 ) != 1 ) {
        return 1 ;
    }// end if

    printf( "Enter value for Num2: " ) ;
    if ( scanf( "%d" , &num2 ) != 1 ) {
        return 1 ;
    }// end if

    printf( "\n--- SWAPPING REPORT ---\n" ) ;
    printf( "Before Swap - Num1: %d, Num2: %d\n" , num1 , num2 ) ;

    swap_values( &num1 , &num2 ) ;

    printf( "After Swap - Num1: %d, Num2: %d\n" , num1 , num2 ) ;

    return 0 ;
}// end main function

void swap_values( int *a , int *b ) {
    int temp = *a ;
    *a = *b ;
    *b = temp ;
}// end swap_values function