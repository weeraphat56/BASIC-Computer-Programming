#include <stdio.h>

#define SIZE 5

void sort_array_ascending( int array[] , int size ) ;
void print_array( int array[] , int size ) ;

int main () {
    int numbers[ SIZE ] ;
    int original_copy[ SIZE ] ;
    int i ;

    printf( "Enter %d integer numbers for sorting:\n" , SIZE ) ;
    for ( i = 0 ; i < SIZE ; i++ ) {
        printf( "Element %d: " , i + 1 ) ;
        scanf( "%d" , &numbers[ i ] ) ;
        original_copy[ i ] = numbers[ i ] ;
    }

    printf( "\n--- ARRAY SORTING REPORT ---\n" ) ;

    printf( "Original Array: " ) ;

    print_array( original_copy , SIZE ) ;

    sort_array_ascending( numbers , SIZE ) ;
    printf( "Sorted Array (Ascending): " ) ;
    print_array( numbers, SIZE ) ;

    return 0 ;
}

void sort_array_ascending( int array[] , int size ) {
    int i = 0 ;
    int j = 1 ;

    for ( i = 0 ; i < size  ; i++ ) {
        for ( j = 0 ; j < size - 1 ; j++ ) {
            if( array[ j ] > array[ j + 1 ] ) {
                int temp = array[ j ] ;
                array[ j ] = array[ j + 1 ] ;
                array[ j + 1 ] = temp ;
            }
        }
    }
}
void print_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]) ;
    }
    printf("\n");
}