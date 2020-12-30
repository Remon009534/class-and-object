#include <iostream>
using namespace std;

class Vehicle
{
    public:
    string model;
    int year;
    string color;

    public:
    void info()
    {
        cout << "Model:- " << model << "\n";
        cout << "Year:- " << year << "\n";
        cout << "Color:- " << color << "\n";

    }
    void accelerate()
    {
        cout << "The " << model << " is accelerating.";
    }
};
int main()
{
    Vehicle bike;

    bike.model = "honda";
    bike.year = 2001;
    bike.color = "black";

    cout << "Bike INFORMATIONS!!" << "\n";

    bike.info();

    Vehicle sedan;

    sedan.model = "Tata Nexon";
    sedan.year = 2020;
    sedan.color = "6 different color";

    cout << "Sedan INFROMATIONS!!" << "\n";

    sedan.info();

    Vehicle lorry;

    lorry.model = "volvo trucks";
    lorry.year = 1999;
    lorry.color = "rainbow";

    cout << "Lorry INFORMAION!!" << "\n";

    lorry.info();

    bike.accelerate();
}