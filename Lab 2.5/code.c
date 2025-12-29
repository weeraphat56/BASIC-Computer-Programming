#include <stdio.h>

int main () {
    int score ;
    int countA = 0 ;
    int countB = 0 ;
    int countC = 0 ;
    int countD = 0 ;
    int countF = 0 ;

    if ( scanf( "%d" , &score ) != 1 ) {
        return 1 ;
    }//end if

    while( score != -1 ) {

        if( score >= 80 ) {
            countA += 1 ;
        }
        else if( score >= 70 ) {
            countB +=  1 ;
        }
        else if( score >= 60 ) {
            countC +=  1 ;
        }
        else if( score >= 50 ) {
            countD +=  1 ;
        }
        else {
            countF +=  1 ;
        }//end if else

        if( scanf( "%d" , &score ) != 1 ) {
            break ;
        }//end if
    }//end while loop

    printf ( "Grade A Count: %d\n" , countA ) ;
    printf ( "Grade B Count: %d\n" , countB ) ;
    printf ( "Grade C Count: %d\n" , countC ) ;
    printf ( "Grade D Count: %d\n" , countD ) ;
    printf ( "Grade F Count: %d\n" , countF ) ;

    return 0 ;
}//end main function