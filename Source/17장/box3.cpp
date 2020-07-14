template <typename T>
class Box {
    T data; // T는 타입(type)을 나타낸다.
public:
    Box();
    void set(T value);
    T get();
};

template <typename T>
Box<T>::Box() {
}

template <typename T>
void Box<T>::set(T value) {
	data = value;
}

template <typename T>
T Box<T>::get() {
	return data;
}
