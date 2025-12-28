#include <stdio.h>

void Access( int , int , int ) ;

int main() {
    int clearanceLevel , age , isActive ;

    if ( scanf( "%d %d %d" , &clearanceLevel , &age , &isActive ) != 3 ) {
        return 1 ;
    }

    Access( clearanceLevel , age , isActive ) ;

    return 0 ;
}// end main function

void Access( int level , int age , int isActive ) {
    if ( ( level == 3 && isActive ) || ( level == 2 && age >= 25 && isActive ) ) {
        printf( "Access Granted" ) ;
        return ;
    }
    printf( "Access Denied" ) ;
}// end Access function 