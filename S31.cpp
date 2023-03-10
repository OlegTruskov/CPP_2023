#include <iostream>
#include <string>

int main()
{
    std::string numbers[10] = {"скажите код cvv на обратной стороне карты", "один", "два", "три", "четыре", "п€ть", "шесть", "семь", "восемь", "дев€ть"};
    int input;
    setlocale(LC_ALL, "Russian");
    std::cout << "¬ведите число (0-9): ";
    std::cin >> input;
    switch (input) {
        case 0:
            std::cout << numbers[0] << std::endl;
            break;
        case 1:
            std::cout << numbers[1] << std::endl;
            break;
        case 2:
            std::cout << numbers[2] << std::endl;
            break;
        case 3:
            std::cout << numbers[3] << std::endl;
            break;
        case 4:
            std::cout << numbers[4] << std::endl;
            break;
        case 5:
            std::cout << numbers[5] << std::endl;
            break;
        case 6:
            std::cout << numbers[6] << std::endl;
            break;
        case 7:
            std::cout << numbers[7] << std::endl;
            break;
        case 8:
            std::cout << numbers[8] << std::endl;
            break;
        case 9:
            std::cout << numbers[9] << std::endl;
            break;
        default:
            std::cout << "Invalid input!" << std::endl;
            break;
    }
    return 0;
}
