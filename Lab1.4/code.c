#include <stdio.h>

int Sigma( int ) ;

int main() {
    int N, sum = 0, i;

    if(scanf("%d" , &N) != 1) {
        printf( "Error: Please enter number!!" ) ;
        return 1;
    }// end if

    sum = Sigma( N ) ;

    printf("%d", sum);

    return 0;
}// end main function

int Sigma( int N ) {
    int i = 0 ;
    int sum = 0 ;

    for( i = 0 ; i < N ; i++ ) {
        sum += i + 1 ;
    }

    return sum ;
}//end function