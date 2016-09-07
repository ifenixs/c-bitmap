#ifndef _BITMAP_H_
#define _BITMAP_H_


typedef struct {
    unsigned char* map;
    int base;
    int size;
} bitmap;

/*
 * init bitmap
 * return a pointer to bitmap whcih has been allocated in heap
 *
 */
extern bitmap*
bitmap_init(int size, int start);


/*
 * set the position index value of bitmap
 *
 *
 */
extern void
bitmap_set(bitmap *_bitmap, int index);

/*
 * take the value of position index in bitmap
 *
 *
 */
extern int
bitmap_get(bitmap *_bitmap, int index);


/*
 * get the value of position index
 *
 *
 */
extern int
bitmap_data(bitmap *_bitmap, int index);

/*
 * free the memory of bitmap
 *
 */
extern void
bitmap_free(bitmap *_bitmap);


#endif

