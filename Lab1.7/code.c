#include <stdio.h>

float BillCalculate( int , float ) ;

int main() {
    int customerType ;
    float consumption_kWh ;
    float totalBill = 0.0 ;

    if ( scanf( "%d %f" , &customerType , &consumption_kWh ) != 2 ) {
        return 1 ;
    }// end if

    if ( customerType < 1 || customerType > 2 ) {
        printf( "Invalid Customer Type" ) ;
        return 1 ;
    }// end if

    if ( consumption_kWh < 0 ) {
        printf( "Error: Consumption can not be negative" ) ;
        return 1 ;
    }// end if

    totalBill = BillCalculate( customerType , consumption_kWh ) ;

    printf( "%.2f\n" , totalBill ) ;

    return 0 ;
}// end main function

float BillCalculate( int customerType , float consumption ) {
    if ( customerType == 1 ) {
        if ( consumption <= 100 ) {
            consumption *= 3 ;
        }
        else {
            consumption *= 4 ;
        }// end if else
    } else {
        if ( consumption <= 100 ) {
            consumption *= 5 ;
        } else {
            consumption *= 6.5 ;
        }// end if else
    }// end if else

    return consumption ;
}//end BillCalculate functionn 