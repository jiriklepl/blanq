#include "test-constrained-fold.hpp"

int main() {
    Struct<void> s;
    s.method<>(); // trivial
    s.method<0>(); // minimal non-trivial
    s.method<0, 0.1, 3/2>(); // non-trivial
}
