#include <stdio.h>
#include <omp.h>

double question1(int x) {
    int i;
    double result = 0;

    #pragma omp parallel for private(i) reduction(+:result)
    for (i = 1; i <= x; i++) {
        result += (x / i) + ((1.0 * i) / x);
    }

    return result;
}

double question2(int n){                                            //practice
    int i;
    double result = 0;

#pragma omp parellel for private(i) reduce(+:result)
    for(i = 1; i < n; i += 1){
        result += (1.0*n)/(i) + (i*1.0)/n;
    }

return result;
}

double question3 (int n){
    int i;
    double result = 0;
    #pragma omp parellel for private(i) reduce(+:result)
    for(i = 1; i <= n; i+=1){
        result += (2.0*i)/n;
    }
}
#include <stdlib.h>
#include <omp.h>

int* randomArray(int n) {
    int* array = (int*)malloc(n * sizeof(int));

    #pragma omp parallel
    {
        #pragma omp master
        {
            for (int i = 0; i < n; i += 1) {
                #pragma omp task firstprivate(i)
                {
                    array[i] = rand();
                }
            }
        }
    } // End of parallel region

    #pragma omp taskwait
    return array;
}


int main() {
    int n = 1; 
    double result = question1(n);
    printf("Result: %lf\n", result);
    return 0;
}
