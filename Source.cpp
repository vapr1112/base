#include "base.h"
#include "child.h"
#include "child_2.h"

int main()
{
	setlocale(LC_ALL, "rus");

	base<int, double> base {12, 56.4};

	child<int, float, int, double> child_1 {45, 5.5, 4, 3.5};

	child_2<int, int, int, int, int, int> child_2 {1,2,3,4,5,6};

	base.print();

	cout << "\nchild \n";

	child_1.print();

	cout << "\ngrandchild \n";

	child_2.print();

	return 0;
}