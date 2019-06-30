#include <iostream>
class A
{
public:
	A() :A(0, 0) {}
	explicit A(int x) : A(x, 0) {}
	A(int x, int y) : a{ x }, b{ y } {}
private:
	int a, b;
};