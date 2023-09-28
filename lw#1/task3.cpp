#include <iostream>
#include <string>

int main() {
    std::string str1, str2;

    // Запрашиваем у пользователя две строки
    std::cout << "Введите первую строку: ";
    std::cin >> str1;
    std::cout << "Введите вторую строку: ";
    std::cin >> str2;

    // Сравниваем строки с помощью метода compare
    int result = str1.compare(str2);

    // Выводим результат сравнения
    if (result < 0) {
        std::cout << "Первая строка меньше второй строке." << std::endl;
    } else if (result > 0) {
        std::cout << "Первая строка больше второй строки." << std::endl;
    } else {
        std::cout << "Строки равны." << std::endl;
    }

    return 0;
}

