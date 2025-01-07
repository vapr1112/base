#pragma once
#include <iostream>

using namespace std;

template <class T, class T2> class base
{
protected:
	T value_1;
	T2 value_2;

public:
	base(T value_1_p, T2 value_2_p)noexcept : value_1{ value_1_p }, value_2{ value_2_p }{}

	T get_value_1()const noexcept { return value_1; }

	T2 get_value_2()const noexcept { return value_2; }

	void set_value_1(T value_1_p)noexcept { value_1 = value_1_p; }

	void set_value_2(T2 value_2_p)noexcept { value_1 = value_2_p; }

	void print()const noexcept { cout << value_1 << value_2; }

	~base(){}
};

