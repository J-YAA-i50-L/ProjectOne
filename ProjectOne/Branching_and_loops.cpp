// 1.5. Ветвления и циклы
/*
В этом параграфе мы познакомимся с операторами ветвления if и switch,
циклами while, do-while и for, а также с оператором goto.
*/

#include <iostream>

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

