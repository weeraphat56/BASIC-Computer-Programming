#include <stdio.h>

int calculate_area(int length , int width) ;

int main() {
    int input_length;
    int input_width;
    int result_area;

    printf( "Enter rectangle length (integer): " ) ;
    if ( scanf("%d", &input_length) != 1 ) {
        return 1 ;
    }

    printf( "Enter rectangle width (integer): " ) ;
    if ( scanf("%d", &input_width) != 1 ) {
        return 1 ;
    }

    result_area = calculate_area( input_length , input_width ) ;

    printf( "\n--- RECTANGLE AREA REPORT ---\n" ) ;
    printf( "Length: %d\n" , input_length ) ;
    printf( "Width: %d\n" , input_width ) ;
    printf( "Calculated Area: %d\n" , result_area ) ;

    return 0 ;
}// end main function

int calculate_area(int length, int width) {
    if ( length < 0 || width < 0 ) {
        return 0 ;
    }

    return length * width ;
}// end calculate_area function