#include <stdio.h>

int main() {
    int N ;
    int i ;
    int countFizzBuzz = 0 ;
    int countFizz = 0 ;
    int countBuzz = 0 ;
    int countOther = 0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    for ( i = 1 ; i <= N ; i++ ) {
        if ( i % 15 == 0 ) {
            countFizzBuzz += 1 ;
        }

        if ( i % 3 == 0 && i % 5 != 0 ) {
            countFizz += 1 ;
        }

        if ( i % 5 == 0 && i % 3 != 0 ) {
            countBuzz += 1 ;
        }

        if ( i % 5 != 0 && i % 3 != 0 ) {
            countOther += 1 ;
        }
    }

    printf( "Count FizzBuzz (by 15): %d\n" , countFizzBuzz ) ;
    printf( "Count Fizz (by 15): %d\n" , countFizz ) ;
    printf( "Count Buzz (by 15): %d\n" , countBuzz ) ;
    printf( "Count Other: %d\n" , countOther ) ;
    return 0 ;
}//end main function