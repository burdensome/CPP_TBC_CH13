#include <iostream>
#include "Storage.h"
// cpp를 강제로 include하는 방법은 cpp를 include하는 것인데.
// 사실 이게 그냥 헤더파일에 넣는거랑 차이가 없으니 그냥 헤더에 넣는다.
#include "Storage.cpp"

using namespace std;

//template<typename T>
//T getMax(T x, T y)
//{
//    return (x > y) ? x : y;
//}
//
//// 위의 template함수는 모든 자료형에 대해서 되는 것인데
//// 특수한 type에 대해서만 Specialization 을 하는 것.
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
