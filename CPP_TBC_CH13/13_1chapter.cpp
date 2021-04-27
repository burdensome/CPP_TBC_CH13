// 여러가지 자료형에 대해서 반복적으로 작업하는걸 도와줌~
#include <iostream>
#include "Cents.h"

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << getMax(1, 2) << std::endl;
    std::cout << getMax(3.14, 1.592) << std::endl;
    std::cout << getMax(1.0f, 3.4f) << std::endl;
    std::cout << getMax('a', 'c') << std::endl;

    std::cout << getMax(Cents(5), Cents(9)) << std::endl;

    return 0;
}