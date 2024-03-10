#include <stdio.h>
#define N 3

void dgemm_def(double a[N][N], double b[N][N], double c[N][N])
{
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printM(double m[N][N]){
    for (int i = 0; i < N;i++){
        printf("\n");
        for(int j = 0; j < N;j++)
            printf("%.1f  ", m[i][j]);
    }
}

int main(){
    /*{ {27,17,24},
        {24,12,29},
        {25,13,12}
       }            
    */
    double a[N][N] = {{1,4,3},{2,1,5},{3,2,1}};
    double b[N][N] = {{5,2,1},{4,3,2},{2,1,5}};
    double c[N][N];
    dgemm_def(a,b,c);
    printM(c);
    return 0;
}