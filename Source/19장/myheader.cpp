#ifndef MYHEADER_H
#define MYHEADER_H
template <typename T>
void print(const T& v, const char* message="")
{
    typename T::const_iterator it;
    std::cout << message;
    std::cout << "( ";
    for (it=v.begin(); it!=v.end(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << " )" << std::endl;
}
#endif
