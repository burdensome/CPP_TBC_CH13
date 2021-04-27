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

// template 특수화!!
// storage클래스가 double에 대해서 instanciation이 되었을 경우 프린트함수는
// 아래와 같이 작동해야한다.
// 근데 아래와 같이 헤더파일에 템플릿 특수화 하는게 가장 좋지만
// cpp로 꼭 보내고 싶다면?
//template<>
//void Storage<double>::print()
//{
//	std::cout << "Double Type ";
//	std::cout << std::scientific << m_value << '\n';
//}