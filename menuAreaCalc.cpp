#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;
    double radius, length, width, base, height, area;

    cout << "Menu:\n";
    cout << "1. Calculate the area of a circle\n";
    cout << "2. Calculate the area of a rectangle\n";
    cout << "3. Calculate the area of a triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius of the circle: ";
            cin >> radius;
            area = PI * radius * radius;
            cout << "Area of the circle: " << area << endl;
            break;
        case 2:
            cout << "Enter length and width of the rectangle: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;
        case 3:
            cout << "Enter base and height of the triangle: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;
        case 4:
            cout << "Quitting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
