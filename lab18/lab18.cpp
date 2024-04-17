﻿#include <iostream> // Подключаем заголовочный файл для использования стандартных ввода-вывода.
double f1(double x) { // Объявление функции f1, которая принимает один аргумент типа double и возвращает значение типа double.
    return cos(x) + x - 7; // Вычисление значения функции f1 и возврат результата.
}

double f2(double x) { // Объявление функции f2, которая принимает один аргумент типа double и возвращает значение типа double.
    return exp(x) - 0.5; // Вычисление значения функции f2 и возврат результата.
}

double bisection(double a, double b, double e, double (*f)(double)) { // Объявление функции bisection, которая принимает четыре аргумента типа double и указатель на функцию, принимающую аргумент типа double и возвращающую значение типа double.
    double c = (a + b) / 2; // Вычисление средней точки интервала [a, b].
    while (fabs(a - b) > 2 * e) { // Цикл выполняется, пока длина интервала больше чем удвоенная погрешность.
        if (f(c) == 0) { // Если значение функции в точке c равно 0, возвращаем c.
            return c;
        }
        else if (f(a) * f(c) < 0) { // Если значения функции на концах интервала разных знаков, сдвигаем правый конец интервала к точке c.
            b = c;
        }
        else { // Иначе сдвигаем левый конец интервала к точке c.
            a = c;
        }
        c = (a + b) / 2; // Вычисляем новую среднюю точку интервала.
    }
    return c; // Возвращаем найденную аппроксимацию корня.
}

int main() { // Основная функция программы.
    double a = -1, b = 1, e = 0.0001; // Инициализация переменных для интервала [a, b] и погрешности e.
    double x1 = bisection(a, b, e, f1); // Поиск корня уравнения f1(x)=0 методом бисекции.
    double x2 = bisection(a, b, e, f2); // Поиск корня уравнения f2(x)=0 методом бисекции.
    std::cout << "x1 = " << x1 << std::endl; // Вывод найденного корня уравнения f1(x)=0.
    std::cout << "x2 = " << x2 << std::endl; // Вывод найденного корня уравнения f2(x)=0.
    return 0; // Возвращаем ноль, чтобы показать успешное завершение программы.
}
