#include <iostream>
#include <string>

int main() {
	int x = 1;
	std::cout << x << "\n";  // напечатает 1
	{
		int x = 2;  // новая переменная, к предыдущему x не имеет отношения
		std::cout << x << "\n";  // напечатает 2
	}
	std::cout << x << "\n";  // снова напечатает 1
}



int FieldVievA() {
	int x = 1;
	std::cout << x << "\n";  // напечатает 1
	{
		int x = 2;  // новая переменная, к предыдущему x не имеет отношения
		std::cout << x << "\n";  // напечатает 2
	}
	std::cout << x << "\n";  // снова напечатает 1
	return 0;
}