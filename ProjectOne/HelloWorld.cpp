#include <iostream>
#include <string>

int main() {
	std::string name;
	std::cout << "What is your name?\n";
	std::cin >> name;
	std::cout << "Hello, " << name << "!\n";
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