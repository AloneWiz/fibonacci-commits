#include <iostream>

// Рекурсивная функция fib(1,1)
int fib(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    std::cout << fib(10) << std::endl;
    return 0;
}
