#include "print_list.h"


void printList(int *list, int len) {
    for (int i = 0; i < len; ++i) {
        printf("%d->", list[i]);
    }
}