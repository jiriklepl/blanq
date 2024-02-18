template<class T>
concept IsFoo = true;

template<class>
struct Struct {
    template<IsFoo auto... xs>
    void method() {}
};
