#pragma once
#include<iostream>
#include<string>
using namespace std;

class test
{
	int a;
	int b;
public:
	test();
	test(int a1 = 5, int b1 = 6);
	test(const test & a);
	int get_a();
	int get_b();

};