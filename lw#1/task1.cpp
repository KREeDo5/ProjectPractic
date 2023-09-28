#include <iostream>
#include <string>

int main() {
    std::string input_string;

    // Запрашиваем у пользователя строку
    std::cout << "Введите строку: ";
    std::cin >> input_string;

    // Проверяем, что строка не пуста
    if (!input_string.empty()) {
        // Выводим первый символ
        std::cout << "Первый символ: " << input_string[0] << std::endl;

        // Выводим последний символ
        std::cout << "Последний символ: " << input_string[input_string.length() - 1] << std::endl;
    } else {
        std::cout << "Строка пуста." << std::endl;
    }

    return 0;
}
