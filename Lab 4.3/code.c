#include <stdio.h>

int main() {
    int DAYS = 7 ;

    int daily_temp[ DAYS ] ;
    int max_temp ;
    int i ;

    for ( i = 0 ; i < DAYS ; i++ ) {
        printf( "Enter temperature for Day %d: " , i + 1 ) ;
        if ( scanf( "%d" , &daily_temp[ i ] ) != 1 ) {
            return 1 ;
        }// end if
    }// end for loop

    max_temp = daily_temp[ 0 ] ;

    for ( i = 0 ; i < DAYS ; i++ ) {
        if ( daily_temp[ i ] > max_temp ) {
            max_temp = daily_temp[ i ] ;
        }// end if
    }// end for loop

    printf( "\n--- DAILY TEMPERATURE REPORT ---\n") ;
    printf( "Recorded Temperatures (C): ") ;

    for ( i = 0 ; i < DAYS ; i++ ) {
        printf( "%d " , daily_temp[ i ] ) ;
    }// end for loop

    printf( "\nMaximum Tempareture Found: %d (C)\n" , max_temp ) ;

    if ( max_temp >= 35 ) {
        printf( "Weather is HOT!" ) ;
    }
    else {
        printf( "Weather is MODERATE!" ) ;
    }// end if else

    return 0 ;
}// end main function