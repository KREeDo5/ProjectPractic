#include <iostream>
#include <string>

int main() {
    std::string inputString;

    // Запрашиваем у пользователя исходную строку
    std::cout << "Введите исходную строку: ";
    std::cin >> inputString;

    while (true) {
        // Выводим меню опций
        std::cout << "\nМеню опций:\n";
        std::cout << "1. Вставить (insert)\n";
        std::cout << "2. Удалить (erase)\n";
        std::cout << "3. Заменить (replace)\n";
        std::cout << "4. Найти (find)\n";
        std::cout << "5. Выйти из программы\n";
        std::cout << "Выберите опцию (1-5): ";

        int choice;
        std::cin >> choice;

        if (choice == 5) {
            break; // Выход из программы
        }

        switch (choice) {
            case 1: {
                int pos;
                std::string toInsert;
                std::cout << "Введите позицию для вставки: ";
                std::cin >> pos;
                std::cout << "Введите строку для вставки: ";
                std::cin >> toInsert;
                inputString.insert(pos, toInsert);
                break;
            }
            case 2: {
                int pos, len;
                std::cout << "Введите начальную позицию для удаления: ";
                std::cin >> pos;
                std::cout << "Введите количество символов для удаления: ";
                std::cin >> len;
                inputString.erase(pos, len);
                break;
            }
            case 3: {
                int pos, len;
                std::string replacement;
                std::cout << "Введите начальную позицию для замены: ";
                std::cin >> pos;
                std::cout << "Введите количество символов для замены: ";
                std::cin >> len;
                std::cout << "Введите строку для замены: ";
                std::cin >> replacement;
                inputString.replace(pos, len, replacement);
                break;
            }
            case 4: {
                std::string toFind;
                std::cout << "Введите строку для поиска: ";
                std::cin >> toFind;
                size_t found = inputString.find(toFind);
                if (found != std::string::npos) {
                    std::cout << "Строка найдена на позиции " << found << std::endl;
                } else {
                    std::cout << "Строка не найдена." << std::endl;
                }
                break;
            }
            default:
                std::cout << "Недопустимая опция. Попробуйте еще раз.\n" << std::endl;
                break;
        }

        // Выводим текущее состояние строки после выполнения операции
        std::cout << "Текущая строка: " << inputString << std::endl;
    }

    return 0;
}

