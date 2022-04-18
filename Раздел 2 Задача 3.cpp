#include <iostream>
#include <math.h>
#include <iomanip>


int main()
{
    setlocale(LC_CTYPE, "Russian");
    
    int n;
    float Perimeter=0, sum=0, Length;

    std::cout << "Введите количество деревьев" << "\n";
    std:: cin >> n;
    std::cout << "\n";
    if (n < 2) { return 0; };

    float x1, y1, xa, ya, xb, yb;
    std::cout << "Введите координаты X и Y для Деревьев" << "\n";
    std::cout << "Координаты дерева № 1" << "\n";
    std::cout << "X: ";
    std::cin  >> x1;
    std::cout << "Y: ";
    std::cin  >> y1;
    xa = x1; ya = y1;

    for (int i = 1; i < n; i++) {
        std::cout << "Координаты дерева № " << i + 1 << "\n";
        std::cout << "X: ";
        std::cin >> xb;
        std::cout << "Y: ";
        std::cin >> yb;
        if ((i == (n - 1)) && (n > 2)) Perimeter += sqrt(pow(x1 - xb, 2) + pow(y1 - yb, 2));
        Perimeter += sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
        xa = xb; ya = yb;
    }

    for (int i = 0; i < n; i++)
    {
        float s;
        std::cout << "Введите радиус дерева №" << i + 1 << "\n";
        std::cin >> s;
        sum = +s;
    }

    Length = (sum / n) + Perimeter;
    std::cout << "Длина ленты вокруг деревьев: " << Length;

    return 0;
}
