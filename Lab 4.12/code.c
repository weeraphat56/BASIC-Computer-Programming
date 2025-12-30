#include <stdio.h>


void print_matrix(int rows , int cols , int *matrix ) ;
void transpose( int[2][3] , int[3][2] ) ;
void multiply ( int[2][3] , int[3][2] , int[2][2] ) ;

int main () {
    const int A_ROWS = 2 ;
    const int A_COLS = 3 ;

    const int B_ROWS = 2 ;
    const int B_COLS = 3 ;

    const int BT_ROWS = 3 ;
    const int BT_COLS = 2 ;

    const int C_ROWS = 2 ;
    const int C_COLS = 2 ;

    int A[A_ROWS][A_COLS];
    int B[B_ROWS][B_COLS];
    int BT[BT_ROWS][BT_COLS];
    int C[C_ROWS][C_COLS];
    int i, j, k;

    printf("Enter elements for Matrix A (2x3):\n");
    for (i = 0; i < A_ROWS; i++) {
        for (j = 0; j < A_COLS; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nEnter elements for Matrix B (2x3):\n");
    for (i = 0; i < B_ROWS; i++) {
        for (j = 0; j < B_COLS; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    transpose( B , BT ) ;
    multiply ( A , BT , C ) ;

    printf("\n--- MATRIX MULTIPLICATION REPORT ---\n");

    printf("\nMatrix A (2x3):\n");
    print_matrix(A_ROWS, A_COLS, &A[0][0] );

    printf("\nMatrix B (2x3):\n");
    print_matrix(B_ROWS, B_COLS, &B[0][0]);

    printf("\nMatrix B Transposed (BT, 3x2):\n");
    print_matrix(BT_ROWS, BT_COLS, &BT[0][0]);

    printf("\nResult Matrix C (A x BT, 2x2):\n");
    print_matrix(C_ROWS, C_COLS, &C[0][0]);

    return 0;
}

void print_matrix(int rows, int cols, int *matrix ) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%4d ", matrix[i * cols + j]);
        }
        printf("\n");
    }
}

void transpose( int original[2][3] , int transposed[3][2] ) {
    int i = 0 ;
    int j = 0 ;

    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 3 ; j++ ) {
            transposed[j][i] = original[i][j] ;
        }
    }
}

void multiply ( int arr1[2][3] , int arr2[3][2] , int arr_result[2][2] ) {
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    for ( i = 0 ; i < 2 ; i++ ) {
        for ( j = 0 ; j < 2 ; j++ ) {
            arr_result[i][j] = 0 ;
            for ( k = 0 ; k < 3 ; k++ ) {
                arr_result[i][j] += arr1[ i ][ k ] * arr2[ k ][ j ] ;
            }
        }
    }
}// end function