#ifndef BIGINT_H
#define BIGINT_H
#include <stdint.h>
#define BS64bB 8 /*BIGINT SIZE 64-bit BaseLine*/
typedef struct {
    uint64_t data[BS64bB];
} BigInt;
#endif