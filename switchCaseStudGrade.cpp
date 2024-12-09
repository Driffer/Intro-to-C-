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

    int gradeGroup = score / 10; // Group score to simplify switch case
    switch (gradeGroup) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << "Grade: A" << endl;
            break;
        case 6:
            cout << "Grade: B" << endl;
            break;
        case 5:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D" << endl;
            break;
        default:
            if (score >= 0) {
                cout << "Grade: F" << endl;
            } else {
                cout << "Invalid score" << endl;
            }
            break;
    }

    return 0;
}
