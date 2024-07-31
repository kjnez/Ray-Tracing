#include "tuple.h"
#include <math.h>

Tuple tuple(double x, double y, double z, double w) {
  return (Tuple){x, y, z, w};
}

Tuple point(double x, double y, double z) { return tuple(x, y, z, 1.0); }

Tuple vector(double x, double y, double z) { return tuple(x, y, z, 0.0); }

int is_point(Tuple t) { return equal(t.w, 1.0); }

int is_vector(Tuple t) { return equal(t.w, 0.0); }

int equal(double a, double b) { return fabs(a - b) < EPSILON; }
