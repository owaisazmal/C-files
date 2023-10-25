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

int main() {
    int n = 1; 
    double result = question1(n);
    printf("Result: %lf\n", result);
    return 0;
}
