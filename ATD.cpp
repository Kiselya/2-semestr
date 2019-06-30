#include <iostream>
#include <stdlib.h>
using namespace std;

const int SIZE = 26;

class stack {
	char stck[SIZE]; // Элементы стека
	int tos; // Вершина стека
public:
	void init();  // Инициализация стека
	void push(char ch); // Добавить символ в стек
	char pop(); // Вытолкнуть символ из стека
};

void stack::init()
{
	tos = 0;
}

void stack::push(char ch)
{
	if (tos == SIZE) {
		cout << "Stek polon!" << endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char stack::pop() {
	if (tos == 0) {
		cout << "Stek polon!" << endl;
		return 0;
	}
	tos--;
	return stck[tos];
}

int main()
{
	stack s1, s2;
	int i;

	s1.init();
	s2.init();

	// Добавляем элементы в стеки
	s1.push('a');
	s2.push('b');
	s1.push('c');
	s2.push('d');
	s1.push('e');
	s2.push('f');

	// Выводим содержимое стеков                  
	for (i = 0; i < 3; i++) cout << s1.pop() << "  ";
	cout << endl;
	for (i = 0; i < 3; i++) cout << s2.pop() << "  ";
	cout << endl;
	system("pause");
	return 0;
	

}