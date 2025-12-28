#include <stdio.h>

int main() {
    int number ;

    do {
        if ( scanf ("%d" , &number ) != 1 ) {
            printf( "Error: Input must be number." ) ;
            break ;
        }// end if

        printf ( "Enter a number (1-10): " ) ;

        if ( number >= 1 && number <= 10 ) {
            printf( "Input accepted: %d\n" , number ) ;
            break ;
        } // end if

        printf( "Error: Value must be 1-10.\n" ) ;

    } while ( 1 ) ; 
    // end do while loop

  return 0 ;
}// end main function 