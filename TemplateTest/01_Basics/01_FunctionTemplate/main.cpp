#include <iostream>

template <class T>
T Max(const T& x, const T& y)
{
    return (x < y) ? y : x;
}

int main(void)
{
    int int_max = Max(1, 3);

    std::cout << "Int Max : " << int_max << std::endl;

    double double_max = Max(3.14, 1.73);

    std::cout << "Double Max : " << double_max << std::endl;

    return 0;
}
