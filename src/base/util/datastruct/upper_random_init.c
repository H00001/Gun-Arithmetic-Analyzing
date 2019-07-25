#include "upper_random_init.h"


int *upperRandom(int length) {
    int *__save = malloc(sizeof(int) * length);
    __save[0] = rand() % 10000;
    for (int i = 1; i < length; ++i) {
        int adder;
        while ((adder = (rand() % 10000)) < 0);
        __save[i] = __save[i - 1] + adder;
    }
    return __save;

}