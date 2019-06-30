class A {

	int Aa;
	int Ab;

public:
	A(int Aa, int Ab) :Aa(Aa), Ab(Ab) {};

};

class B {

	int Ba;
	int Bb;

public:
	B(int Ba, int Bb) :Ba(Ba), Bb(Bb) {};
};

	class C : public A, public B
	{
		int C1;

	public:

		C(int Aa, int Ab, int Ba, int Bb, int C1)
			: A(Aa, Ab), B(Ba, Bb), C1(C1)
		{};

	};