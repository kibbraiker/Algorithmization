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

    float P;
        P = heightVector(coordVector(A, B)) + heightVector(coordVector(A, C)) + heightVector(coordVector(B, C));

    std::cout << "\n Периметр равен = " << P;

    return 0;
}
