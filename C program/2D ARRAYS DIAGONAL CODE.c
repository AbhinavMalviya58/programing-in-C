#include <stdio.h>

//void printDiagonalElements(int matrix[rows][cols], int, int);

int main()
{
    // USER INPUT
    int rows, cols;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    for(int i=0 ; i<rows ; i++){
        for(int j=0 ; j<cols ; j++){
            scanf("%d", &matrix[rows][cols] );
        }
    }

    // LOGIC
    // int size = rows;
    // int result[size];
    //printDiagonalElements(matrix, rows, cols); // call

    // int size = sizeof(result)/sizeof(result[0]);



    // for(int i=0 ; i<size ; i++){
    //     printf("%d ", result[i]);
    // }

    return 0;
}

//void printDiagonalElements(int matrix[][], int rows, int cols){
  //  int ans[rows];
   // for(int i=0 ; i<rows ; i++){
    //    for(int j=0 ; j<cols ; j++){
      //      if(i == j){
/*                ans[i] = matrix[i][j];// matrix[0][0], matrix[1][1], matrix[2][2], matrix[3][3]
            }
        }
    }
    printf("Diagonal elements are:\n");

    for(int i=0 ; i<rows ; i++){
        printf("%d ", ans[i]);
    }
    // return ans;
}
*/
