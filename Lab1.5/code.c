#include <stdio.h>

int main() {
    int number ;
    int evenSum = 0 ;
    int oddSum = 0 ;

    if( scanf( "%d" , &number) != 1) {
        return 1 ;
    }// end if

    while( number != 0 ) {

        if( number % 2 == 0 ) {
            evenSum += number ;
        } else {
            oddSum += number ;
        }// end if

        if( scanf( "%d" , &number ) != 1 ) {
            break;
        }// end if

  }// end wile loop

    printf( "Even Sum: %d\n" , evenSum ) ;
    printf( "Odd Sum: %d\n" , oddSum ) ;

    return 0 ;
}// end main function