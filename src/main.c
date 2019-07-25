
#include <stdio.h>
#include <stdlib.h>
#include "./model/find/find_by_bin.h"

int main() {
    int list[8];
    for (int i = 0; i < 8; ++i) {
        list[i] = rand();
    }
    int result = find(list, 9, 6);
    printf("%d", result);
    printf("first version");
}