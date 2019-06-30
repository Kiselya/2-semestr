template <typename T>
class A
{
public:
	class B
	{
		friend class A; 

	private:
		T* bar;

	public:
		
	};

	void test(T data)
	{
		B foo(data);
		T* p = foo.bar; 
	}
};