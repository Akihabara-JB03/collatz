#include <bigint.h>
void BILS(BigInt *n) {
    /*BigInt Left Shift*/
    for (int64_t i = (64 * BS64bB) - 1; i >= 0; i--) {
        if (n->data[i >> 6] & (1ULL << (i & 63))) {
            n->data[(i+1) >> 6] |= (1ULL << ((i+1) & 63));
            n->data[i >> 6] &= ~(1ULL << (i & 63));
        }
    }
}
BigInt TN(BigInt *n) {
    /*Three n*/

}
BigInt CC(BigInt *n) {
    /*Collatz Calculate*/
}