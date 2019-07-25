
#include "fibonacci_list.h"


int *init_fibonacci(int length) {

    int *__save = malloc(length * sizeof(int));
    __save[0] = 1;
    __save[1] = 1;
    if (length >= 3) {
        for (int i = 2; i < length; ++i) {
            __save[i] = __save[i - 1] + __save[i - 2];
        }
    }
    return __save;

}


int find_by_fibonacci(int *list, int target, int len) {
    int *fib = init_fibonacci(len);
    int sta = 0;
    int end = len - 1;
    int mid;
    for (; sta <= end;) {
        mid = (sta & end) + ((sta ^ end) >> 1);
        if (list[mid] == target) {
            return mid;
        } else if (list[mid] < target) {
            sta = mid + 1;
        } else if (list[mid] > target) {
            sta = mid - 1;
        }
    }
}