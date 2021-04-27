#pragma once

#include <assert.h>	// for assert()
#include <iostream>

template<typename T, unsigned int T_SIZE>
class MyArray
{
private:
	//int m_length;
	T* m_data; // T m_data[T_SIZE]

public:
	MyArray()
	{
		m_data = new T[T_SIZE];
	}

	~MyArray()
	{
		delete[] m_data;
	}

	T& operator[](int index)
	{
		assert(index >= 0 && index < T_SIZE);
		return m_data[index];
	}

	int getLength()
	{
		return T_SIZE;
	}

	// T_SIZE같은 Non-type parameter가 있을 경우에는 explicit instantiation
	// 을 하지 않는다. 이유는 template를 사용 할 때 cpp에 보낼 때 
	// 자료형 일 때는 사용되는 모든 자료형을 cpp 파일에
	// template class MyArray<char>;
	// template class MyArray<double>;
	// 위와 같이 넣었었는데 T_SIZE같은 경우에는 모든 숫자를
	// cpp파일에 넣어 explicit intantiation 을 할 수 없기 때문에
	// 하지 않는 것이다.
	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};