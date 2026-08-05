# Avionics SW Lab — DO-178C

Embedded C modules developed with a DO-178C-inspired lifecycle.
Each module ships with a written requirements specification (HLR/LLR),
the implementation, and a verification test suite.

| # | Module | Description | Spec |
|---|--------|-------------|------|
| 01 | ring-buffer | Lock-free SPSC circular buffer for UART drivers | SRS-RINGBUF-001 |

## Conventions
- Language: C99, freestanding — no dynamic allocation
- Coding standard: MISRA-C:2012
- Layout per module: `docs/` `inc/` `src/` `test/` `Makefile`

## Author
Hatem — Embedded Software Engineer (avionics)
