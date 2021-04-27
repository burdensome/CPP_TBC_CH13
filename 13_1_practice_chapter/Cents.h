#pragma once

#include <iostream>

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents)
		: m_cents(cents)
	{}

	/*friend bool operator > (const Cents& cent1, const Cents& cent2)
	{
		return (cent1.m_cents > cent2.m_cents) ? true : false;
	}*/

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		std::cout << cents.m_cents << " cents";
		return out;
	}

};