#include <iostream>
using namespace std;

int main() {
    string fullName, courseName;
    int score;

    cout << "Enter student's full name: ";
    getline(cin, fullName);
    cout << "Enter the course: ";
    getline(cin, courseName);
    cout << "Enter the score: ";
    cin >> score;

    cout << "Student: " << fullName << endl;
    cout << "Course: " << courseName << endl;

    if (score >= 70) {
        cout << "Grade: A" << endl;
    } else if (score >= 60) {
        cout << "Grade: B" << endl;
    } else if (score >= 50) {
        cout << "Grade: C" << endl;
    } else if (score >= 40) {
        cout << "Grade: D" << endl;
    } else if (score >= 0) {
        cout << "Grade: F" << endl;
    } else {
        cout << "Invalid score" << endl;
    }

    return 0;
}
