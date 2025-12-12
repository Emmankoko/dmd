#include <complex.h>

void foo() {
    double * a;
    double _Complex * b;
    double _Complex zden;
    double c, d;
    zden = a[0];
    zden = b[0];
    if (c > d) {
      zden = b[0];
    } else {
      zden = a[0];
    }
}
