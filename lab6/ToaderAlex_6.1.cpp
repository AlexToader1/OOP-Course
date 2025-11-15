#include <iostream>
using namespace std;

class City
{
    public:
        virtual void displayInfo() = 0;

        virtual void showAttractions() = 0;


        virtual void LocalTime() = 0;
};

class NewYork : public City
{
    public:
        void displayInfo()
        {
            cout << "Welcome to New York City!" << endl;
        }

        void showAttractions()
        {
            cout << "Famous attractions: Statue of Liberty, Central Park, Times Square." << endl;
        }

        void LocalTime()
        {
            cout << "Local time in New York: 01:47" << endl;
        }
};

class Bucharest : public City
{
    public:
        void displayInfo()
        {
            cout << "Welcome to Bucharest!" << endl;
        }

        void showAttractions()
        {
            cout << "Famous attractions: Palace of the Parliament, Herastrau Park, Old Town." << endl;
        }

        void LocalTime()
        {
            cout << "Local time in Bucharest: 08:47" << endl;
        }
};

class Tokyo : public City
{
    public:
        void displayInfo()
        {
            cout << "Welcome to Tokyo!" << endl;
        }

        void showAttractions()
        {
            cout << "Famous attractions: Tokyo Tower, Shibuya Crossing, Senso-ji Temple." << endl;
        }

        void LocalTime()
        {
            cout << "Local time in Tokyo: 15:47" << endl;
        }
};

int main()
{
    NewYork ny;
    ny.displayInfo();
    ny.showAttractions();
    ny.LocalTime();

    City* city = &ny;
    city->showAttractions();
    city->LocalTime();



    return 0;
}