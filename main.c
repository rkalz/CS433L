#include "lab2.h"

int main(int argc, char** argv) {

    print_hello();
    if (argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        printf("%i %i\n", a, b);

        printf("The mean is %f\n", mean(a,b));

        int* medians = median(a,b);
        if (medians[0] == medians[1]) {
            printf("The median is %i\n", medians[0]);
        } else {
            printf("The low median is %i and the high median is %i\n", medians[0], medians[1]);
        }
    }

}