#include <iostream>
using namespace std;

class Motor
{
    public:

        Motor()
        {
            cout << "Motor pornit" << endl;
        }
        ~Motor()
        {
            cout << "Motor oprit" << endl;
        }
};

class Masina
{
    private:
        Motor motor;
    public:
        Masina()
        {
            cout << "Masina asamblata" << endl;
        }
        ~Masina()
        {
            cout << "Masina dezasamblata" << endl;
        }
};

int main()
{
    Masina masinaMea;
    return 0;
}

//outputul afiseaza ordinea in care sunt apelate constructorii si destructorii deoarece
//membrii sunt initializati in ordinea in care sunt declarati in clasa si destructorii sunt apelati in ordinea inversa
//constructorii sunt apelati in ordinea: Masina, Motor