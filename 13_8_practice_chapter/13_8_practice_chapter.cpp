#include <iostream>

using namespace std;

template<class T>
class A
{
private:
    T m_value;

public:
    A(const T& input)
        : m_value(input)
    {}

    template<typename TT>
    void doSomething(const TT & input )
    {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;
    }

    void print()
    {
        cout << m_value << endl;
    }
};

int main()
{
   /* A<char> a_char('A');
    a_char.print();

    a_char.doSomething(int());*/

    A<char> a_int('A');
    a_int.print();

    a_int.doSomething(int());

    return 0;
}