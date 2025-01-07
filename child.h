#pragma once
#include "base.h"
template <class T, class T2, class T3, class T4> class child :
    protected base<T, T2>
{
private:
	T3 value_3;
	T4 value_4;

public:
	child(T value_1_p, T2 value_2_p, T3 value_3_p, T4 value_4_p)noexcept : 
		base<T, T2> (value_1_p, value_2_p), value_3{ value_3_p }, value_4{ value_4_p } {}

	T3 get_value_3()const noexcept { return value_3; }

	T4 get_value_4()const noexcept { return value_4; }

	void set_value_3(T3 value_3_p)noexcept { value_3 = value_3_p; }

	void set_value_4(T4 value_4_p)noexcept { value_4 = value_4_p; }

	void print1()const noexcept { cout << value_1 << value_2 << value_3 << value_4; }

	~child(){}
};

