class DataBase {
public:
	virtual void save() = 0;
	virtual void update() = 0;
	virtual void del(int);
	virtual bool size() const = 0;
};
class StudentsNames : public DataBase {
private:
	vector<string> names;     
public:
	
};
class StudentsLastNames : public DataBase {
private:
	vector<string> lastnames;     
public:
	
};
class StudentsMarks : public DataBase {
private:
	vector<int> marks;  
public:
	
};
void  implementation_code(DataBase* pb, int index)
{
	p->update();       
	if (p->size() > index) 
		p->del(index);        
	p->save();         
}