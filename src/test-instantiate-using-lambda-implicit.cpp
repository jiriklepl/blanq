template<auto>
struct Struct {
};

int main() {
    Struct<[]{}> s1;
    Struct<[]{}> s2;
    Struct<[]{}> s3;
}
