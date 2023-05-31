#include <stdio.h>
int main ()
{
    int u = 3;
    int v;
    int *pu;   /* puntero a un entero */
    int *pv;   /* puntero a un entero */

    pu = &u;   /* asigna dirección de u a pu */
    v = *pu;   /* asigna valor de u a v */
    pv = &v;   /* asigna dirección de v a pv */

    printf("\nu=%d   &u=%p     pu=%p    *pu=%d", u, &u, pu, *pu);
    printf("\n\nv=%d   &v=%p   pv=%p    *pv=%d", v, &v, pv, *pv);
}