#pragma once

#include <iostream>

template <class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{

	}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

// template Ư��ȭ!!
// storageŬ������ double�� ���ؼ� instanciation�� �Ǿ��� ��� ����Ʈ�Լ���
// �Ʒ��� ���� �۵��ؾ��Ѵ�.
// �ٵ� �Ʒ��� ���� ������Ͽ� ���ø� Ư��ȭ �ϴ°� ���� ������
// cpp�� �� ������ �ʹٸ�?
//template<>
//void Storage<double>::print()
//{
//	std::cout << "Double Type ";
//	std::cout << std::scientific << m_value << '\n';
//}