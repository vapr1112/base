#pragma once
#include "child.h"
#include "base.h"

template <class T, class T2, class T3, class T4, class T5, class T6> class child_2 :
	public child<T, T2, T3, T4>
{
private:
	T5 value_5;
	T6 value_6;

public:
	child_2(T value_1_p, T2 value_2_p, T3 value_3_p, T4 value_4_p, T5 value_5_p, T6 value_6_p)noexcept :
		child<T, T2, T3, T4>(value_1_p, value_2_p, value_3_p, value_4_p), value_5{ value_5_p }, value_6{ value_6_p } {}

	T5 get_value_5()const noexcept { return value_5;}

	T6 get_value_6()const noexcept { return value_6;}

	void set_value_5(T5 value_5_p)noexcept { value_5 = value_5_p; }

	void set_value_6(T6 value_6_p)noexcept { value_6 = value_6_p; }

	void print()const noexcept 
	{ cout << this->value_1 << this->value_2 << this->value_3 << this->value_4 << value_5 << value_6; }

	~child_2() {}
};

