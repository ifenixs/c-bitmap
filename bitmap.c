#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include "bitmap.h"


bitmap* bitmap_init(int size, int start) {
    bitmap *_bitmap = (bitmap *)malloc(sizeof(bitmap));
    assert(_bitmap != NULL);
    _bitmap->map = (unsigned char *)malloc((size/8 + 1)*sizeof(char));
    assert(_bitmap->map != NULL);
    _bitmap->base = start;
    _bitmap->size = size / 8 + 1;
    return _bitmap;
}


void bitmap_set(bitmap *_bitmap, int index) {
    assert(_bitmap != NULL);
    int quo = ( index - _bitmap->base) / 8;
    int remainder = (index - _bitmap->base) % 8;
    unsigned char x = (0x1 << remainder);
    assert(quo <= _bitmap->size);
    _bitmap->map[quo] |= x;
}


int bitmap_get(bitmap *_bitmap, int index) {
    assert(_bitmap != NULL);
    int quo = (index) / 8;
    int remainder = (index) % 8;
    unsigned char x = (0x1 << remainder);
    unsigned char res;
    assert(quo <= _bitmap->size);
    res = _bitmap->map[quo] & x;
    return res > 0 ? 1 : 0;
}


int bitmap_data(bitmap *_bitmap, int index) {
    assert(_bitmap != NULL);
    return (index + _bitmap->base);
}

void bitmap_free(bitmap *_bitmap) {
    free(_bitmap);
}



