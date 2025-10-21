#include <iostream>
#include <cstring>
using namespace std;

class Sibling
{
private:
    char* nume;
    char* prenume;
    int* varsta;

public:
    Sibling(const char* n, const char* p, int v)
    {
        nume = new char[strlen(n) + 1];
        strcpy(nume, n);
        prenume = new char[strlen(p) + 1];
        strcpy(prenume, p);
        varsta = new int(v);
    }

    Sibling(const Sibling& other)
    {
        nume = new char[strlen(other.nume) + 1];
        strcpy(nume, other.nume);
        prenume = new char[strlen(other.prenume) + 1];
        strcpy(prenume, other.prenume);
        varsta = new int(*other.varsta);
    }

    ~Sibling();

    void afiseaza() const
    {
        cout << "Nume: " << nume << endl;
        cout << "Prenume: " << prenume << endl;
        cout << "Varsta: " << *varsta << endl;
    }

    void setNume(const char* n)
    {
        delete[] nume;
        nume = new char[strlen(n) + 1];
        strcpy(nume, n);
    }

    void setPrenume(const char* p)
    {
        delete[] prenume;
        prenume = new char[strlen(p) + 1];
        strcpy(prenume, p);
    }

    void setVarsta(int v)
    {
        *varsta = v;
    }

};

Sibling::~Sibling()
{
        delete[] nume;
        delete[] prenume;
        delete varsta;
}

int main()
{
    Sibling sibling1("Dani", "Mocanu", 25);
    Sibling sibling2 = sibling1;

    cout << "Sibling 1:" << endl;
    sibling1.afiseaza();
    cout << endl;

    cout << "Sibling 2:" << endl;
    sibling2.afiseaza();

    sibling2.setNume("Bossu");
    sibling2.setPrenume("Banosu");
    sibling2.setVarsta(30);
    cout << endl;
    cout << "Dupa modificare Sibling 2:" << endl;
    cout << "Sibling 1:" << endl;
    sibling1.afiseaza();
    cout << endl;
    cout << "Sibling 2:" << endl;
    sibling2.afiseaza();


    return 0;
}


