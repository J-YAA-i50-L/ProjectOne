#include <iostream>
#include <string>

int main() {
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;  // ���������� ��������� �������� ���������� ������� �� ����� ������ ���� ��������
	std::cout << a << " " << b << " " << c << "\n";
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
		����� ������� � ��������� ���������� ��� ������� �������
		(�� ������� ����������� ������ �������� ������),
		����� ������������ ������� <std::getline> �� ������������� ����� <string>.
	*/
	std::string name;
	std::cout << "What is your name?\n";
	std::getline(std::cin, name);  // <std::getline(?istream&?is,?string&?str,?char?delim)>
	std::cout << "Hello, " << name << "!\n";
	return 0;
}


int ThreeNumbers() {
	int a;
	int b;
	int c;
	std::cin >> a >> b >> c;  // ���������� ��������� �������� ���������� ������� �� ����� ������ ���� ��������
	std::cout << a << " " << b << " " << c << "\n";
}
