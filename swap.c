#include <stdio.h>

void swap(int *, int *);
void swap_bug(int *, int *);

int main(void){

    int a = 3, b = 4;
    printf("a = %d\t b = %d\n", a, b);
    printf("a = %p\t b = %p\n", &a, &b);
     swap(&a, &b);
    //swap_bug(&a, &b);
    printf("a = %d\t b = %d\n", a, b);
    printf("a = %p\t b = %p\n", &a, &b);
    return 0;
}

void swap(int *alpha, int *beta){

    int temp = *alpha;
    *alpha = *beta;
    *beta = temp;
}

void swap_bug(int *alpha, int *beta){

    printf("alpha = %d\t beta = %d\n", *alpha, *beta);
    printf("alpha = %p\t beta = %p\n", alpha, beta);
    int *temp = alpha;
    alpha = beta;
    beta = temp;
    printf("alpha = %d\t beta = %d\n", *alpha, *beta);
    printf("alpha = %p\t beta = %p\n", alpha, beta);
}