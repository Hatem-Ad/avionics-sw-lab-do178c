/**
 * @file    ring_buffer.h
 * @brief   Lock-free SPSC circular buffer.
 * @spec    SRS-RINGBUF-001 Rev A
 */
#ifndef RING_BUFFER_H
#define RING_BUFFER_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

/** @brief Return status. */
typedef enum
{
    RB_OK        = 0,
    RB_ERR_PARAM = 1,
    RB_ERR_FULL  = 2,
    RB_ERR_EMPTY = 3
} rb_status_t;

/**
 * @brief Control structure. Fields are private: do not access directly.
 * @note  head is written by the producer only, tail by the consumer only.
 */
typedef struct
{
    uint8_t          *storage;   /**< caller-provided buffer          */
    size_t            capacity;  /**< power of two                    */
    volatile uint32_t head;      /**< write index (producer)          */
    volatile uint32_t tail;      /**< read index  (consumer)          */
} rb_t;

rb_status_t rb_init(rb_t *rb, uint8_t *storage, size_t capacity);
rb_status_t rb_put(rb_t *rb, uint8_t byte);
rb_status_t rb_get(rb_t *rb, uint8_t *byte);
size_t      rb_count(const rb_t *rb);
bool        rb_is_empty(const rb_t *rb);
bool        rb_is_full(const rb_t *rb);
rb_status_t rb_flush(rb_t *rb);

#endif /* RING_BUFFER_H */