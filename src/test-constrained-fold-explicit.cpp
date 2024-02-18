#include "test-constrained-fold.hpp"

template void Struct<void>::method<>(); // trivial
template void Struct<void>::method<0>(); // minimal non-trivial
template void Struct<void>::method<0, 0.1, []{}>(); // non-trivial

int main() {
}
