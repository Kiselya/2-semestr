class Class
{
private:
	int x;
public:
	Class()
	{
		x = 10;
	}

	Class(const Class&) = default; 

	void change()
	{
		x += 10;
	}
};