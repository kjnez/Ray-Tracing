#ifndef TUPLE_H
#define TUPLE_H

#define EPSILON 0.000001
typedef struct {
  double x, y, z, w;
} Tuple;

Tuple tuple(double x, double y, double z, double w);
Tuple point(double x, double y, double z);
Tuple vector(double x, double y, double z);
int is_point(Tuple t);
int is_vector(Tuple t);
int equal(double a, double b);

#endif
