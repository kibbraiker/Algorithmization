#include <iostream>
#include <string>
#include <math.h>


struct Coords {
    float x;
    float y;
};

Coords coordVector(Coords point1, Coords point2) {
    Coords temp;
    temp.x = point2.x - point1.x;
    temp.y = point2.y - point1.y;

    return temp;
}

float heightVector(Coords vector) {
    return sqrt(pow(vector.x, 2) + pow(vector.y, 2));
}

int main() {

    setlocale(LC_CTYPE, "Russian");

    Coords A, B, C;

    std::cout << "\n Введите координаты точки А: ";
    std::cout << "\n 1) Для X: ";
    std::cin >> A.x;
    std::cout << " 2) Для Y: ";
    std::cin >> A.y;

    std::cout << "\n Введите координаты точки Б: ";
    std::cout << "\n 1) Для X: ";
    std::cin >> B.x;
    std::cout << " 2) Для Y: ";
    std::cin >> B.y;

    std::cout << "\n Введите координаты точки C: ";
    std::cout << "\n 1) Для X: ";
    std::cin >> C.x;
    std::cout << " 2) Для Y: ";
    std::cin >> C.y;

    double a, b, c, p, r, s;
    double pi = 3.14;

    a = sqrt((B.x - A.x) * (B.x - A.x) + (B.y - A.y) * (B.y - A.y)) * 2;
    b = sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y)) * 2;
    c = sqrt((C.x - A.x) * (C.x - A.x) + (C.y - A.y) * (C.y - A.y)) * 2;

    p = (a + b + c) / 2;
    r = a * b * c / 4 / sqrt(p * (p - a) * (p - b) * (p - c));

    s = r * r * pi;
    std::cout << "\n Площадь вписанной в треугольник окружности равна = " << s;

    return 0;
}
