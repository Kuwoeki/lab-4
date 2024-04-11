#include <iostream>
#include <string>

using namespace std;

class Transport {
public:
    int fuel;

    Transport(const int& a) : fuel(a) {}

    void turn(const string& a) {
        if (fuel > 30) {
            if (a == "left" || a == "right") {
                fuel -= 30;
                cout << "You turned " << a << endl;
            }
            else {
                cout << "Incorrect command!" << endl;
            }
        }
    }

    void showFuel() {
        cout << "Fuel: " << fuel << endl;
    }
};

class Truck : public Transport {
public:

    string goods;
    int weight;
    int year;

    Truck(const int& fuel, const string& Goods, const int& Weight, const int& Year)
        : Transport(fuel), goods(Goods), weight(Weight), year(Year) {}

    void showTruck() {
        showFuel();
        cout << "Goods: " << goods << endl;
        cout << "Weight: " << weight << " kg" << endl;
        cout << "Year: " << year << endl;
    }

};

int main() {
    Truck truck(1100, "Construction materials", 5000, 2020);
    truck.showTruck();
    return 0;
}
