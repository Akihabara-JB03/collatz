#include <bigint.h>
#include <string.h>
void BINT_INIT(BigInt *n) {
    memset(n->data,0,sizeof(n->data));
}