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

	// T_SIZE���� Non-type parameter�� ���� ��쿡�� explicit instantiation
	// �� ���� �ʴ´�. ������ template�� ��� �� �� cpp�� ���� �� 
	// �ڷ��� �� ���� ���Ǵ� ��� �ڷ����� cpp ���Ͽ�
	// template class MyArray<char>;
	// template class MyArray<double>;
	// ���� ���� �־����µ� T_SIZE���� ��쿡�� ��� ���ڸ�
	// cpp���Ͽ� �־� explicit intantiation �� �� �� ���� ������
	// ���� �ʴ� ���̴�.
	void print()
	{
		for (int i = 0; i < T_SIZE; ++i)
			std::cout << m_data[i] << " ";
		std::cout << std::endl;
	}
};