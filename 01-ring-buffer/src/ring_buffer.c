#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include "rb_types.h"

typedef enum
{
    RB_OK        = 0,
    RB_ERR_PARAM = 1,
    RB_ERR_FULL  = 2,
    RB_ERR_EMPTY = 3
} rb_status_t;

typedef struct
{
    uint8_t          *storage;
    uint32_t          capacity;
    volatile uint32_t head;
    volatile uint32_t tail;
} rb_t;

rb_status_t rb_init(rb_t *rb, uint8_t *storage, uint32_t capacity);
rb_status_t rb_put(rb_t *rb, uint8_t byte);
rb_status_t rb_get(rb_t *rb, uint8_t *byte);
uint32_t    rb_count(const rb_t *rb);
boolean_t   rb_is_empty(const rb_t *rb);
boolean_t   rb_is_full(const rb_t *rb);
rb_status_t rb_flush(rb_t *rb);

#endif /* RING_BUFFER_H */