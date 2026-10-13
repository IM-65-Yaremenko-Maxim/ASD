#include <iostream>
#include <windows.h>

double func1(double x) { return x * x * x - 5 * x * x; }
double func2(double x) { return x * x - 3; }

// Програма 1: без логічних операцій
void variant1(double x) {
    if (x > 10) {
        std::cout << "y = x^2 - 3, y = " << func2(x) << "\n";
    }
    else {
        if (x > 5) {
            std::cout << "Для даного x, y не існує\n";
        }
        else {
            if (x > 0) {
                std::cout << "y = x^3 - 5x^2, y = " << func1(x) << "\n";
            }
            else {
                if (x < -32) {
                    std::cout << "Для даного x, y не існує\n";
                }
                else {
                    if (x < -20) {
                        std::cout << "y = x^2 - 3, y = " << func2(x) << "\n";
                    }
                    else {
                        std::cout << "Для даного x, y не існує\n";
                    }
                }
            }
        }
    }
}

// Програма 2: з логічними операціями
void variant2(double x) {
    if ((x < -20 && x >= -32) || x > 10) {
        std::cout << "y = x^2 - 3, y = " << func2(x) << "\n";
    }
    else if (x <= 5 && x > 0) {
        std::cout << "y = x^3 - 5x^2, y = " << func1(x) << "\n";
    }
    else {
        std::cout << "Для даного x, y не існує\n";
    }
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double x = 0;
    std::cout << "Введіть x: ";
    std::cin >> x;

    std::cout << "\n[Програма 1]\n";
    variant1(x);

    std::cout << "\n[Програма 2]\n";
    variant2(x);

    return 0;
}