#include <stdio.h>

int main() {
    float pricipal ;
    float monthlyPayment ;
    float interest ;
    int monthCount = 0 ;
    const float INTEREST_RATE = 0.01 ;
    const float PENALTY = 10.0 ;

    if ( scanf( "%f %f" , &pricipal , &monthlyPayment ) != 2 ) {
        return 1 ;
    }//end if

    if ( pricipal < 0 ) {
        return 1 ;
    }//end if

    if ( monthlyPayment < 0 ) {
        return 1 ;
    }//end if

    do {
        if( monthCount >= 10 ) {
            printf( "Loan settled in 10+ months.\n" ) ;
            return 0 ;
        }

        interest = pricipal * INTEREST_RATE ;
        pricipal = pricipal + interest ;
        
        if ( monthlyPayment < interest ){
            pricipal = pricipal + PENALTY ;
        }//end if

        pricipal = pricipal - monthlyPayment ;
        monthCount++ ;

        printf( "Month %d: Remaining %.2f\n" , monthCount , pricipal ) ;
    } while( pricipal > 0 ) ; //end do while loop

    printf( "Loan settled in %d months.\n" , monthCount ) ;

    return 0 ;
}//end main function