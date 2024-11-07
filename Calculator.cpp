#include <iostream>

/// \class Calculator
/// Класс для выполнения основных арифметических операций.
class Calculator {
public:
    /// Сложение двух чисел.
    /// \param a Первое число.
    /// \param b Второе число.
    /// \return Сумма чисел a и b.
    double add(double a, double b) {
        return a + b;
    }

    /// Вычитание двух чисел.
    /// \param a Первое число.
    /// \param b Второе число.
    /// \return Разность чисел a и b.
    double subtract(double a, double b) {
        return a - b;
    }

    /// Умножение двух чисел.
    /// \param a Первое число.
    /// \param b Второе число.
    /// \return Произведение чисел a и b.
    double multiply(double a, double b) {
        return a * b;
    }

    /// Деление двух чисел.
    /// \param a Делимое.
    /// \param b Делитель.
    /// \return Частное от деления a на b.
    /// \note Если b равно 0, выводит сообщение об ошибке и возвращает 0.
    double divide(double a, double b) {
        if (b == 0) {
            std::cerr << "Ошибка: деление на ноль!" << std::endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    double a, b;
    char operation;

    std::cout << "Введите выражение в формате: число операция число (например, 5 + 3): ";
    std::cin >> a >> operation >> b;

    double result;

    switch (operation) {
        case '+':
            result = calc.add(a, b);
            break;
        case '-':
            result = calc.subtract(a, b);
            break;
        case '*':
            result = calc.multiply(a, b);
            break;
        case '/':
            result = calc.divide(a, b);
            break;
        default:
            std::cerr << "Ошибка: неизвестная операция!" << std::endl;
            return 1;
    }

    std::cout << "Результат: " << result << std::endl;
    return 0;
}