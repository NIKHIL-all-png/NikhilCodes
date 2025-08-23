#include<iostream>
using namespace std;

class Car {
public:
    string brand;

    Car(string b) {
        brand = b;
    }

    // Copy Constructor
    // Car(const Car &obj) {
    //     brand = obj.brand;
    // }

    void show() {
        cout << "Brand: " << brand << endl;
    }
};

int main() {
    Car car1("BMW");
    Car car2 = car1; // Copy constructor is called
    car2.show();
}
