#include <iostream>
#include "Storage.h"

using namespace std;

//template<typename T>
//T getMax(T x, T y)
//{
//    return (x > y) ? x : y;
//}
//
//template<>  // specializer
//char getMax(char x, char y)
//{
//    cout << "Warning : compareing chars" << endl;
//    return (x > y) ? x : y;
//}

int main()
{
    /*cout << getMax<double>(1, 2) << endl;
    cout << getMax('a', 'b') << endl;
    cout << getMax(3, 4) << endl;*/

    Storage<int> nValue(5);
    Storage<double> dValue(6.7);

    nValue.print();
    dValue.print();

    return 0;
}
