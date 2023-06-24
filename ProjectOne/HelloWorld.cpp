#include <iostream>
#include <string>

int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
	return 0;
}


int HelloWorld() {
	std::cout << "Hello, world! \n";
	return 0;
}


int BjarneStroustrup() {
	int value = 42;
	std::string title = "Bjarne Stroustrup";
	std::cout << title << "\n";
	std::cout << value;
	return 0;
}

int name() {
	std::string name;
	std::cout << "What is your name?\n";
	std::cin >> name;
	std::cout << "Hello, " << name << "!\n";
	return 0;
}


int FullName() {
	/*
		Чтобы считать в строковую переменную всю строчку целиком
		(не включая завершающий символ перевода строки),
		нужно использовать функцию <std::getline> из заголовочного файла <string>.
	*/
	std::string name;
	std::cout << "What is your name?\n";
	std::getline(std::cin, name);  // <std::getline( istream& is, string& str, char delim)>
	std::cout << "Hello, " << name << "!\n";
	return 0;
}


int ThreeNumbers() {
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;  // Поочередно принемает значения разделеные переход на новую строку либо пробелом
	std::cout << a << " " << b << " " << c << "\n";
	return 0;
}


int TaskTwoA() {
	std::cout << "C++ is a general-purpose programming language with a bias towards systems programming that\n";
	std::cout << "  - is a better C\n";
	std::cout << "  - supports data abstraction\n";
	std::cout << "  - supports object-oriented programming\n";
	std::cout << "  - supports generic programming.";
	return 0;
}

int TaskTwoB() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
	return 0;
}