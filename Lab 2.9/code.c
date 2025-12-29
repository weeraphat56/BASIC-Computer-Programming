#include <stdio.h>

int main () {
    int initialStock ;
    int N ;
    int cmdCode ;
    int quantity ;
    int i ;
    float PENALTY_FEE ;
    int currentStock ;
    float totalPenakties = 0.0 ;

    if ( scanf( "%d %f %d" , &initialStock , &PENALTY_FEE , &N ) != 3 ) {
        return 1 ;
    }
    currentStock = initialStock ;

    for ( i = 0 ; i < N ; i++ ) {
        
        if ( scanf( "%d %d" , &cmdCode , &quantity) != 2 ) {
            break ;
        }

        switch ( cmdCode ) {
            case 1 : {
                initialStock += quantity ;
                printf( "Recived [%d] units.\n" , quantity ) ;
                break ;
            }
            case 2 : {
                if ( quantity <= 0 ) {
                    printf( "Error: Quantity must be positive.\n" ) ;
                    break ;
                }
                else if ( quantity <= initialStock ) {
                    initialStock -= quantity ;
                    printf("Shipped [%d] units.\n" , quantity ) ;
                    break ;
                }
                else if ( quantity > initialStock ) {
                    totalPenakties += PENALTY_FEE ;
                    printf("FAILUREL Insufficient stock. PENALTY [%.2f] add\n" , PENALTY_FEE ) ;
                    break ;
                }
                break ;
            }
            case 3 : {
                printf( "Current Stock: %d\n" , initialStock ) ;
                printf( "Total Penalties: %.2f\n" , totalPenakties ) ;
                break ;
            }
            default : {
                printf( "Error: Invalid Command." ) ;
                break ;
            }
        }
    }

    return 0 ;
}//end function