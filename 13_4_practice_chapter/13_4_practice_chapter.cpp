#include <iostream>
#include "Storage.h"
// cpp�� ������ include�ϴ� ����� cpp�� include�ϴ� ���ε�.
// ��� �̰� �׳� ������Ͽ� �ִ°Ŷ� ���̰� ������ �׳� ����� �ִ´�.
#include "Storage.cpp"

using namespace std;

//template<typename T>
//T getMax(T x, T y)
//{
//    return (x > y) ? x : y;
//}
//
//// ���� template�Լ��� ��� �ڷ����� ���ؼ� �Ǵ� ���ε�
//// Ư���� type�� ���ؼ��� Specialization �� �ϴ� ��.
//// template<>
//template<>  // specializer
//char getMax(char x, char y)
//{
//    cout << "Warning : comparing chars" << endl;
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
