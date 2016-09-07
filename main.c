#include <stdio.h>
#include "bitmap.h"

int main() {

    int a[] = {5,8,7,6,3,1,10,78,56,34,23,2,43,54,65,89,87,76,89,100,55};
    int i;
    bitmap *map = bitmap_init(100, 0);
    for (i = 0; i <= 20; i++) {
        bitmap_set(map, a[i]);
    }

    for (i = 0; i <= 100; i++) {
        if (bitmap_get(map, i) > 0) {
            printf("%d ", bitmap_data(map, i));
        }
    }
    printf("\n");
    bitmap_free(map);
    return 0;
}
