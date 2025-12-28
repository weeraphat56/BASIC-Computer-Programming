#include <stdio.h>

float VatCalculate( int , float ) ;

int main() {
    int categoryCode ;
    float price_before_vat ;
    float totalBill = 0.0 ;
    float vatAmount = 0.0 ;

    if ( scanf( "%f %d" , &price_before_vat , & categoryCode ) != 2 ) {
        printf( "Input error" ) ;
        return 1 ;
    }

    if( price_before_vat < 0 ) {
        printf( "Price cannot be negative" ) ;
        return 1 ;
    }

    totalBill = VatCalculate( categoryCode , price_before_vat ) ;

    if ( categoryCode >= 1 && categoryCode <= 3 ) {
        vatAmount = totalBill - price_before_vat ;
        printf( "Vat Amount: %.2f\n" , vatAmount ) ;
        printf( "Total Price: %.2f\n" , totalBill ) ;
    }
    else {
        printf( "Invalid Category\n" ) ;
    }

    return 0 ;
}// end main function

float VatCalculate( int categoryCode , float price_before_vat ) {
    switch (categoryCode) {
        case 1: {
            return price_before_vat * 1.07 ;
        }
        case 2 : {
            return price_before_vat ;
        }
        case 3 : {
            return price_before_vat * 1.15 ;
        }
    }// end switch case
    return 0 ;
}// end main function