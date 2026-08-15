#ifndef RB_TYPES_H
#define RB_TYPES_H

/* Project-defined fixed-width types.
   This file is the ONLY translation unit permitted to reference
   basic C types. All other files use the typedefs below exclusively.
   Target: ARM Cortex-M4 (STM32F303), arm-none-eabi-gcc, ILP32. */

typedef unsigned char   uint8_t;
typedef unsigned short  uint16_t;
typedef unsigned int    uint32_t;

typedef signed char     int8_t;
typedef signed short    int16_t;
typedef signed int      int32_t;

typedef uint8_t         boolean_t;

#define TRUE      ((boolean_t)1U)
#define FALSE     ((boolean_t)0U)
#define NULL_PTR  ((void *)0)

/* Compile-time width verification: a wrong width produces a negative
   array size and fails the build. */
typedef char assert_u8 [(sizeof(uint8_t)  == 1U) ? 1 : -1];
typedef char assert_u16[(sizeof(uint16_t) == 2U) ? 1 : -1];
typedef char assert_u32[(sizeof(uint32_t) == 4U) ? 1 : -1];
typedef char assert_s32[(sizeof(int32_t)  == 4U) ? 1 : -1];

#endif /* RB_TYPES_H */