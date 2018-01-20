#include "lab2.h"

void print_hello() {
    printf("hello world!\n");
}

double mean(int a, int b) {
    return (double) ((a + b)/2.0);
}

int* median(int a, int b) {
    int result[2];
    double avg = mean(a,b);
    result[0] = (int) floor(avg);
    result[1] = (int) ceil(avg);
    return result;
}