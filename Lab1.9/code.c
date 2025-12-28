#include <stdio.h>

float CostCalculate( int , float ) ;

int main() {
    int zoneCode ;
    float weight_kg ;
    float totalCost = 0.0 ;

    if ( scanf( "%d %f" , &zoneCode , &weight_kg ) != 2 ) {
        return 1 ;
    }// end if

    if ( weight_kg < 0 ) {
        printf( "Weight cannot be negative" ) ;
        return 1 ;
    }// end if

    if ( zoneCode < 1 || zoneCode > 3 ) {
        printf( "Invalid Zone Code" ) ;
        return 1 ;
    }// end if

    totalCost = CostCalculate( zoneCode , weight_kg ) ;

    printf( "%.2f\n" , totalCost ) ;

    return 0 ;
}// end main function

float CostCalculate( int zoneCode , float weight_kg ) {
    if ( zoneCode == 1 ) {
        if ( weight_kg <= 5 ) {
            return 50 ;
        }
        else{
            printf("%d",weight_kg) ;
            return 80 ;
        }// end if else
    }
    else if ( zoneCode == 2 ) {
        if ( weight_kg <= 10 ) {
            return 150 ;
        }
        else{
            return 250 ;
        }// end if else
    }
    else {
        return 500 ;
    }// end if else
}// end CostCalculate function 