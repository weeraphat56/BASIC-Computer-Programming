#include <stdio.h>

float Bill( int , float ) ;

int main() {
    int planCode ;
    float dataUsage_GB ;
    float totalBill = 0.0 ;

    if ( scanf( "%d %f" , &planCode , &dataUsage_GB ) != 2 ) {
        return 1 ;
    }

    if ( dataUsage_GB < 0 ) {
        return 1 ;
    }

    totalBill = Bill( planCode , dataUsage_GB ) ;

    if( planCode == 1 || planCode == 2 ) {
        printf( "%.2f\n" , totalBill ) ;
    }
    else {
        printf( "Invalid Plan Code\n" ) ;
    }

    return 0 ;
}// end main function

float Bill( int planCode , float Usage) {
    if ( planCode == 1 ) {
        if ( Usage < 10 ) {
            return 299 ;
        }
        else {
            return 299 + 10 * (Usage - 10) ;
        }
    }
    else {
         if ( Usage < 20 ) {
            return 599 ;
        }
        else {
            return 599 + 50 + 5 * (Usage - 20) ;
        }
    }
    return 0 ;
}// end Bill function 