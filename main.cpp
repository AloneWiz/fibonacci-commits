#include <iostream>

// Выводит первые n чисел Фибоначчи (начиная с 0)
void printFib(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; ++i) {
        std::cout << a << std::endl;
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    printFib(10);
    return 0;
}

