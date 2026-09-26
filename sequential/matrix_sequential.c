#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4000

int main() {
    double *A = malloc((long long)N * N * sizeof(double));
    double *B = malloc((long long)N * N * sizeof(double));
    double *C = malloc((long long)N * N * sizeof(double));

    if (A == NULL || B == NULL || C == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Initializing %d x %d matrices...\n", N, N);

    for (long long i = 0; i < (long long)N * N; i++) {
        A[i] = 1.0;
        B[i] = 1.0;
        C[i] = 0.0;
    }

    clock_t start = clock();

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < N; k++) {
            double a = A[(long long)i * N + k];

            for (int j = 0; j < N; j++) {
                C[(long long)i * N + j] +=
                    a * B[(long long)k * N + j];
            }
        }
    }

    clock_t end = clock();

    double execution_time =
        (double)(end - start) / CLOCKS_PER_SEC;

    printf("\nSequential Matrix Multiplication Completed\n");
    printf("Matrix Size = %d x %d\n", N, N);
    printf("Execution Time = %.6f seconds\n", execution_time);
    printf("Verification C[0][0] = %.2f\n", C[0]);

    free(A);
    free(B);
    free(C);

    return 0;
}
