#ifndef _BITMAP_H_
#define _BITMAP_H_


typedef struct {
    unsigned char* map;
    int base;
    int size;
} bitmap;

extern bitmap*
bitmap_init(int size, int start);

extern void
bitmap_set(bitmap *_bitmap, int index);

extern int
bitmap_get(bitmap *_bitmap, int index);

extern int
bitmap_data(bitmap *_bitmap, int index);

extern void
bitmap_free(bitmap *_bitmap);


#endif

