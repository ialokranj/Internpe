#include <iostream>

int main() {
    double width, height;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;

    double perimeter = 2 * (width + height); // Calculate the perimeter
    double area = width * height; // Calculate the area

    std::cout << "Perimeter is = " << perimeter << std::endl;
    std::cout << "Area is = " << area << std::endl;

    return 0;
}
