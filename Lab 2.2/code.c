#include <stdio.h>

int main() {
    int N ;
    int i ;
    int quantity ;
    float uniPrice ;
    float itemCost ;
    float grandTotal = 0.0 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    for( i = 0 ; i < N ; i++ ) {
        scanf( "%f %d" , &uniPrice , &quantity ) ;
        itemCost = uniPrice * quantity ;
        grandTotal += itemCost ;

        if ( uniPrice >= 1000 ) {
            grandTotal -= itemCost * 0.1 ;
        }
    }

    printf( "Grand Total %.2f\n" , grandTotal ) ;
}// end main function