#include <iostream>

#define MODE 1 // Задайте значение MODE (0, 1 или другое)

#ifndef MODE
    #error "Необходимо определить MODE"
#endif

#if MODE == 0
int main() {
    std::cout << "Работаю в режиме тренировки" << std::endl;
    return 0;
}
#elif MODE == 1
int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Работаю в боевом режиме" << std::endl;
    int x, y;
    std::cout << "Введите число 1: ";
    std::cin >> x;
    std::cout << "Введите число 2: ";
    std::cin >> y;
    std::cout << "Результат сложения: " << add(x, y) << std::endl;
    return 0;
}
#else
int main() {
    std::cout << "Неизвестный режим. Завершение работы" << std::endl;
    return 0;
}
#endif
