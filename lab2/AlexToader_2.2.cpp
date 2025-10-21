#include <iostream>
using namespace std;

class Motorbike {
    public:
    
       string model;
       int horsePower;
       int year;
       string color;

       Motorbike(string m, int hp, int y, string c);
       Motorbike(string m, int hp, int y);
       Motorbike(string m, int hp);
       Motorbike();
       ~Motorbike();

};

Motorbike::Motorbike(string m, int hp, int y, string c) {
    model = m;
    horsePower = hp;
    year = y;
    color = c;
}

Motorbike::Motorbike(string m, int hp, int y) {
    model = m;
    horsePower = hp;
    year = y;
    color = "black";
}

Motorbike::Motorbike(string m, int hp) {
    model = m;
    horsePower = hp;
    year = 2020;
    color = "black";
}

Motorbike::Motorbike() {
    model = "S1000RR";
    horsePower = 230;
    year = 2024;
    color = "black";
}

Motorbike::~Motorbike() {
    cout << "Motorbike " << model << " is being destroyed." << endl;
}

int main() {
    Motorbike bike1("Ninja ZX-10R", 203, 2021, "green");
    Motorbike bike2("Yamaha YZF-R1", 200, 2020);
    Motorbike bike3("Ducati Panigale V4", 214);
    Motorbike bike4;

    cout << "Bike 1: " << bike1.model << ", " << bike1.horsePower << " HP, " << bike1.year << ", " << bike1.color << endl;
    cout << "Bike 2: " << bike2.model << ", " << bike2.horsePower << " HP, " << bike2.year << ", " << bike2.color << endl;
    cout << "Bike 3: " << bike3.model << ", " << bike3.horsePower << " HP, " << bike3.year << ", " << bike3.color << endl;
    cout << "Bike 4: " << bike4.model << ", " << bike4.horsePower << " HP, " << bike4.year << ", " << bike4.color << endl;


    return 0;
}
