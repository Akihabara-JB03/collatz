#include <bigint.h>
void BIP(BigInt *n, BigInt *m) {
    /*BigInt Plus*/
    for (int i = 0; i < BS64bB; i++) {
        n->data[i]+=m->data[i];
    }
}
void BILS(BigInt *n) {
    /*BigInt Left Shift*/
    for (int64_t i = (64 * BS64bB) - 1; i >= 0; i--) {
        if (n->data[i >> 6] & (1ULL << (i & 63))) {
            if (i == 64 * BS64bB - 1) {
                continue;
            }
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