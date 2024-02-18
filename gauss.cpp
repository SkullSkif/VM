#include <iostream>
#include <iomanip>
#define N 3


/* double* */void gauss(/*int raws, int cols, */double matrix[N][N+1]){
    const int cols = N+1;
    const int rows = N;
    for (int i = 0; i <cols-1;i++){
        for(int n = 1+i;n < rows;n++){
            double factor = matrix[n][i] / matrix[i][i];
            for(int m = i;m < cols;m++){
                matrix[n][m] = factor * matrix[i][m];
            }
        }
    }
    double x[N];
  for (int i = N - 1; i >= 0; i--) {
    x[i] = matrix[i][N];
    for (int j = i + 1; j < N; j++)
      x[i] -= matrix[i][j] * x[j];
    x[i] /= matrix[i][i];
  }

  printf("Answer:\n");
  for (int i = N - 1; i >= 0; i--)
    printf("%f\n", x[i]);
}

int main(){
    double matr[N][N+1]={2,1,4,16,3,2,1,10,1,3,3,16};
    // for (int i =0; i < N;i++){
    //     for(int j = 0; j < N+1; j++)
    //         matr[i][j] = rand() % 10;
    //         //std::cout << matr[i][j];
    // }

    for (int i =0; i < N;i++){
        for(int j = 0; j < N+1; j++)
            printf("%.3f  ",matr[i][j]);
            //std::cout << matr[i][j];
    std::cout << std::endl;
    }
    std::cout << std::endl;
    gauss(matr);
    for (int i =0; i < N;i++){
        for(int j = 0; j < N+1; j++)
            printf("%.1f  ",matr[i][j]);
            //std::cout << matr[i][j];
    std::cout << std::endl;
    }
    return 0;
}