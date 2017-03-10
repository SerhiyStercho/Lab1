#include <iostream>
using namespace std;
#include "class.h"


int test::get_a()
{
	return a;
}
int test::get_b()
{
	return b;
}

test::test()
{
	a = 0;
	b = 0;
}

test::test(int a1, int b1)
{
	a = a1;
	b = b1;
}

