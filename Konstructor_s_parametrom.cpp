class AB
{
private:
	int a;
	int b;
public:
	AB() : a(10), b(10) 
}

class BA
{

public:
	AB(int A = 10, int B = 10) : a(A), b(B) { }
}