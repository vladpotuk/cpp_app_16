#include <iostream>
#include <Windows.h>
int main() {
    system("chcp 1251");
    system("cls");
    int number;

    
    std::cout << "������ ����������� �����: ";
    std::cin >> number;

    if (number < 100000 || number > 999999) {
        std::cout << "�������: ������� ����� �� � ������������." << std::endl;
    }
    else {
        
        int digit1 = number / 100000;
        int digit2 = (number / 10000) % 10;
        int digit3 = (number / 1000) % 10;
        int digit4 = (number / 100) % 10;
        int digit5 = (number / 10) % 10;
        int digit6 = number % 10;

        
        if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6) {
            std::cout << "�� ������� �����!" << std::endl;
        }
        else {
            std::cout << "�� �� ������� �����." << std::endl;
        }
    }

    return 0;
}
