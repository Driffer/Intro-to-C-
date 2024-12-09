#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    int timer = 0;
    while (true) {
        switch (timer % 3) {
            case 0:
                cout << "Red Light" << endl;
                this_thread::sleep_for(chrono::seconds(10)); // Red light for 10 seconds
                break;
            case 1:
                cout << "Green Light" << endl;
                this_thread::sleep_for(chrono::seconds(15)); // Green light for 15 seconds
                break;
            case 2:
                cout << "Yellow Light" << endl;
                this_thread::sleep_for(chrono::seconds(5)); // Yellow light for 5 seconds
                break;
        }
        timer++;
    }

    return 0;
}
