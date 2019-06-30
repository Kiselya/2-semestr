static int a = 10; 

class Stavka
{
public:
	static int m_stat; 
	int getRef()
	{
		static int ref = 1; 
		return ref++;
	}
};
int Stavka::m_stat;