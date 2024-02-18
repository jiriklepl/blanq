template<auto = []{}>
struct Struct {
};

template struct Struct<>;
template struct Struct<>;
template struct Struct<>;

int main() {}
