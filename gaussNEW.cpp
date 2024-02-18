#include <iostream>
#include <iomanip>
#define N 3


// /* double* */void gauss(/*int raws, int cols, */double matrix[N+1][N]){

// }

int main(){
    //double matrix[N+1][N]={2,1,4,16,3,2,1,10,1,3,3,16};
    double matrix[N + 1][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j <= N; j++)
            scanf("%lf", &matrix[j][i]);
        for (int i = 0; i < N;i++){
        for(int n = 1+i;n < N;n++){
            double factor = matrix[i][n] / matrix[i][i];
            for(int m = i;m < N+1;m++){
                matrix[m][n] -= factor * matrix[m][i];
            }
        }
    }
    double answer[N];
  for (int i = N - 1; i >= 0; i--) {
    answer[i] = matrix[N][i];
    for (int j = i + 1; j < N; j++)
      answer[i] -= matrix[j][i] * answer[j];
    answer[i] /= matrix[i][i];
  }

  printf("Answer:\n");
  for (int i = N - 1; i >= 0; i--)
    printf("%f\n", answer[i]);
    // for (int i =0; i < N;i++){
    //     for(int j = 0; j < N+1; j++)
    //         matr[i][j] = rand() % 10;
    //         //std::cout << matr[i][j];
    // }

    // for (int i =0; i < N;i++){
    //     for(int j = 0; j < N+1; j++)
    //         printf("%lf  ",matr[i][j]);
    //         //std::cout << matr[i][j];
    // std::cout << std::endl;
    // }
    // std::cout << std::endl;
    // //gauss(matr);
    // for (int i =0; i < N;i++){
    //     for(int j = 0; j < N+1; j++)
    //         printf("%.1f  ",matr[i][j]);
    //         //std::cout << matr[i][j];
    // std::cout << std::endl;
    // }
    return 0;
}