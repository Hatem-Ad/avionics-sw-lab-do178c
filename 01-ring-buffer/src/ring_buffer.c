/**
 * @file    ring_buffer.c
 * @brief   Implementation of SRS-RINGBUF-001 Rev A.
 */
#include "ring_buffer.h"

/* --- Private helpers ---------------------------------------------------- */

/** @brief Return true if value is a non-zero power of two. */
static bool rb_is_power_of_two(size_t value)
{
    /* TODO */
}

/* --- Public functions --------------------------------------------------- */

/** @req LLR-RB-001, LLR-RB-002 */
rb_status_t rb_init(rb_t *rb, uint8_t *storage, size_t capacity)
{
    rb_status_t status = RB_OK;
    /* TODO: validate params, then initialise fields */
*storage = 0;

    return status;
}

/** @req LLR-RB-005, LLR-RB-006, LLR-RB-007 */
rb_status_t rb_put(rb_t *rb, uint8_t byte)
{
    rb_status_t status = RB_OK;
    /* TODO: NULL check -> full check -> write data -> publish index */
    return status;
}

/** @req LLR-RB-008, LLR-RB-009, LLR-RB-010 */
rb_status_t rb_get(rb_t *rb, uint8_t *byte)
{
    rb_status_t status = RB_OK;
    /* TODO */
    return status;
}

/** @req LLR-RB-013 */
size_t rb_count(const rb_t *rb)
{
    size_t count = 0U;
    /* TODO */
    return count;
}

/** @req LLR-RB-003 */
bool rb_is_empty(const rb_t *rb)
{
    /* TODO */
}

/** @req LLR-RB-004 */
bool rb_is_full(const rb_t *rb)
{
    /* TODO */
}

/** @req LLR-RB-014 */
rb_status_t rb_flush(rb_t *rb)
{
    rb_status_t status = RB_OK;
    /* TODO */
    return status;
}