#include <iostream>
#include <cmath>

const double PI = 3.14159; // Define the value of PI

int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    double perimeter = 2 * PI * radius; // Calculate the perimeter
    double area = PI * pow(radius, 2); // Calculate the area

    std::cout << "Perimeter is = " << perimeter << std::endl;
    std::cout << "Area is = " << area << std::endl;

    return 0;
}
