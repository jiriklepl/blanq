#include "test-constrained-fold.hpp"

int main() {
    Struct<void> s;
    s.method<>();
    s.method<0>();
    s.method<0, 0.1, []{}>();
}
