#include <iostream>
#include <iomanip>
#include <conio.h>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    std::cout << "Введите радиус: ";

    double r;
    std::cin >> r;

    double pi = 3.14;
    double s = pi * (r * r);
    double dl = 2 * pi * r;

    std::cout << "Длина окружности: " << dl << "\n";
     std::cout << "Площадь круга: " << s << "\n";

    return 0;
}
