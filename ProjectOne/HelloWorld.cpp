#include <iostream>
#include <string>
#include <limits>  // необходимо для numeric_limits
#include <cstdint>  // целочисленные типы с фиксированным размером


int main() {
    int n;
    std::cin >> n;
    std::cout << (n * n + n) / 2 << "\n";
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

int SimpleDataTypes() {
	char c = '1';    // символ
	bool b = true;   // логическая переменная, принимает значения false и true
	int i = 42;      // целое число (занимает, как правило, 4 байта)
	short int si = 17;            // короткое целое (занимает 2 байта)
	long li = 12321321312;       // длинное целое (как правило, 8 байт)
	long long lli = 12321321312; // длинное целое (как правило, 16 байт)
	float f = 2.71828;           // дробное число с плавающей запятой (4 байта)
	double d = 3.141592;         // дробное число двойной точности (8 байт)
	long double ld = 1e15;       // длинное дробное (как правило, 16 байт)
	return 0;
}

int SimpleDataTypesVolume() {
	std::cout << "char: " << sizeof(char) << "\n";                 //  1
	std::cout << "bool: " << sizeof(bool) << "\n";                 //  1
	std::cout << "short int: " << sizeof(short int) << "\n";       //  2 (по стандарту >= 2)
	std::cout << "int: " << sizeof(int) << "\n";                   //  4 (по стандарту >= 2)
	std::cout << "long int: " << sizeof(long int) << "\n";         //  8 (по стандарту >= 4)
	std::cout << "long long int: " << sizeof(long long) << "\n";   //  8 (по стандарту >= 8)
	std::cout << "float: " << sizeof(float) << "\n";               //  4
	std::cout << "double: " << sizeof(double) << "\n";             //  8
	std::cout << "long double: " << sizeof(long double) << "\n";   // 16
	return 0;
}


int SimpleDataTypesVolumeMaxMin() {
	// Минимальное и максимальное значение, помещающееся в данный числовой тип, можно получить так:
	// посчитаем для типа int:
	std::cout << "minimum value: " << std::numeric_limits<int>::min() << "\n"
		<< "maximum value: " << std::numeric_limits<int>::max() << "\n";
	return 0;
}

int TypesOfDivision() {
	int a = 7, b = 3;
	int q = a / b;  // 2
	int r = a % b;  // 1
	// Если при делении нужно получить обычное частное, то один из аргументов 
	// нужно привести к вещественному типу
	double d = static_cast<double>(a) / b; // 2.333....
	return 0;
}


int TaskTwoA() {
	double cm;
	double dume = 2.34;
	std::cin >> cm;
	std::cout << cm * dume;
	return 0;
}

int TaskTwoB() {
	int a, b;
	std::cin >> a >> b;
	std::cout << a + b;
	return 0;
}
