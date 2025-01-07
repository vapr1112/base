#pragma once
#include "base.h"
template <class T, class T2, class T5, class T6> class child_2 :
	protected base<T, T2>
{
private:
	T5 value_5;
	T6 value_6;

public:
	child_2(T value_1_p, T2 value_2_p, T5 value_5_p, T6 value_6_p)noexcept :
		base<T, T2>(value_1_p, value_2_p), value_5{ value_5_p }, value_6{ value_6_p } {}

	T5 get_value_5()const noexcept { return value_5; }

	T6 get_value_6()const noexcept { return value_6; }

	void set_value_3(T5 value_5_p)noexcept { value_5 = value_5_p; }

	void set_value_6(T6 value_6_p)noexcept { value_6 = value_6_p; }

	void print2()const noexcept { cout << value_1 << value_2 << value_5 << value_6; }

	~child_2() {}
};

