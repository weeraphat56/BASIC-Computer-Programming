#include <stdio.h>

struct Order {
    int itemId ;
    float uniPrice ;
    int quantity ;
} ;

int main () {
    int N ;
    int i ;
    float grandTotal = 0.0 ;
    float SHIPPING_FEE = 50 ;

    if ( scanf( "%d" , &N ) != 1 ) {
        return 1 ;
    }

    struct Order orders[ N ] ;

    for ( i = 0 ; i < N ; i++ ) {
        float itemTotal ;

        if ( scanf( "%d %f %d" , &orders[i].itemId , &orders[ i ].uniPrice , & orders[i].quantity ) != 3 ) {
            return 1 ;
        }

        itemTotal = ( orders[i].uniPrice * (float)orders[ i ].quantity ) + SHIPPING_FEE ;

        if ( itemTotal >= 500 ) {
            itemTotal *= 0.90 ;
        }

        grandTotal += itemTotal ;
    }
    printf( "Grand Total: %.2f\n" , grandTotal ) ;

    return 0 ;
}// end function