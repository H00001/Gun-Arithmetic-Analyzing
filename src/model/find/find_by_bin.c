#include "find_by_bin.h"


int find(int const *search, int target, int len) {
    int sta = 0;
    int end = len - 1;
    int mid;
    for (; sta <= end;) {
        mid = (sta & end) + ((sta ^ end) >> 1);
        if (search[mid] == target) {
            return mid;
        } else if (search[mid] < target) {
            sta = mid + 1;
        } else if (search[mid] > target) {
            sta = mid - 1;
        }
    }
    return -1;
}