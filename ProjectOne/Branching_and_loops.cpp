// 1.5. Ветвления и циклы
/*
В этом параграфе мы познакомимся с операторами ветвления if и switch,
циклами while, do-while и for, а также с оператором goto.
*/

#include <cstdint>
#include <iostream>
#include <cmath>

int main() {
    double x = 0.1, y = 0.2;
    if (x + y == 0.3) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
    }
 
    std::cout << x + y << "\n";
}


/*

if (condition1) {
    // случай, когда condition1 истинно
    } 
else if (condition2) {
    // случай, когда condition1 ложно, а condition2 истинно
    } 
else if (contition3) {
    // случай, когда condition1 и condition2 ложны, а condition3 истинно
    } 
else {
    // случай, когда condition1, condition2 и condition3 ложны
    }
На месте condition может стоять любое выражение логического типа. 
Простейшие примеры таких выражений — это проверка на равенство (==) и неравенство (!=),
а также сравнения на меньше / больше (<, <=, > и >=):
*/


int IfStatement() {
    int x;
    std::cin >> x;
    if (x <= 0) {
        std::cout << "zero or negative\n";
    } else if (x == 1) {
        std::cout << "one\n";
    } else if (x == 2) {
        std::cout << "two\n";
    } else {
        std::cout << "many\n";
    }
    return 0;
}

/*
Условия можно комбинировать с помощью логических операторов && (И), || (ИЛИ) и ! (НЕ).
Рассмотрим пример, где проверяется принадлежность точки разным интервалам на прямой.
*/


int DifficultConditions() {
    int a, b, x;
    std::cin >> a >> b >> x;
    /* Тут должна быть логика заполнения объявленных переменных,
    но мы её опустили, чтобы не отвлекаться */
 
    if (a <= x && x <= b) {
        std::cout << "точка x лежит на отрезке [a; b]" << "\n";
        // точка x лежит на отрезке [a; b]
    } else {
        std::cout << "точка x лежит вне отрезке [a; b]" << "\n";
        // точка x лежит вне отрезка [a; b]
    }
 
    // то же самое можно было бы проверить так:
    if (!(x < a || x > b)) {  // отрицание
        std::cout << "точка x лежит на отрезке [a; b]" << "\n";
        // точка x лежит на отрезке [a; b]
    } else {
        std::cout << "точка x лежит вне отрезка [a; b]" << "\n";
        // точка x лежит вне отрезка [a; b]
    }
    return 0;
}


int point_false() {
    // Сравнение чисел с плавающей точкой
    double x = 0.1, y = 0.2;
    if (x + y == 0.3) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
        // Из за погрешности будет вот так потому что это всегда так, а не 0,3 
        // 0.1 + 0.2 == 0.30000000000000004 (Это она так подумает)
        // А тебе все равно скажет, что "NOT EQUAL 0.3"
    }
 
    std::cout << x + y << "\n";
}

// Так как обычное сранение через == не работает 
// Мы идем в обход и пользуемся матиматикой 
// Для этого мы будем использовать библиотеку "cmath"

int point_true() {
    double delta = 0.000001;
 
    double x = 0.1, y = 0.2;
    double sum = x + y;
 
    if (std::abs(sum - 0.3) < delta) {
        std::cout << "EQUAL ";
    } else {
        std::cout << "NOT EQUAL ";
    }
 
    std::cout << sum << "\n";
}


// В си есть такая фишка как и в новом питоне как свичи 
// Лично я между принцыпом их работы не вижу ни какой разницы
// По логике вещей мы просто прогемся по вопросам и сравниваем с какой либо переменой
// Если они одинаковые то мы выполняем дейсвия кейса

// Вот пример калькулятора простейшего реализованого на свичах и на условиях 


int calc_if() {
    int64_t a, b;
    char operation;
    std::cin >> a >> operation >> b;
 
    int64_t result = 0;
    if (operation == '+') {
        result = a + b;
    } else if (operation == '-') {
        result = a - b;
    } else if (operation == '*') {
        result = a * b;
    } else if (operation == '/' || operation == ':') {
        result = a / b;
    } else if (operation == '%') {  // остаток от деления
        result = a % b;
    }
 
    std::cout << result << "\n";
}

int calc_switch() {
    int64_t a, b;
    char operation;
    std::cin >> a >> operation >> b;
 
    int64_t result;
    switch (operation) {
        case '+':
            result = a + b;
            break;  // если не написать этот break, программа просто пойдёт дальше в код следующего блока case
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
        case ':':
            result = a / b;
            break;
        case '%':
            result = a % b;
            break;
        default:  // здесь обрабатывается случай, когда ни один case не сработал.
            result = 0;
    }
 
    std::cout << result << "\n";
}

