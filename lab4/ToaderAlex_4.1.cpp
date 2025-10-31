#include <iostream>
using namespace std;

class Beer
{
    protected:
        string type;
        string origin;
    
    public:
        Beer(string t, string o);
        Beer();
        string getType(){ return this->type;}
        string getOrigin() { return this->origin;}
};

class typeA: private Beer
{
    private:
        int length;
    public:
        typeA();
        typeA(int l){length = l;}
        void info()
        {
            cout << "Area of A label:";
            cout << endl << this->length * this->length << endl;
            cout << "typeA's type is " << this->getType() << endl;
            cout << "typeA's origin is " << this->getOrigin() << endl << endl;
        }
};

class typeB: private Beer
{
    private:
        double radius;
    public:
        typeB();
        typeB(int r){radius = r;}
        void info()
        {
            cout << "Area of B label:";
            cout << endl << 3.14 * this->radius * this->radius << endl;
            cout << "typeB's type is " << this->getType() << endl;
            cout << "typeB's origin is " << this->getOrigin() << endl << endl;
        }
};

class typeC: private Beer
{
    private:
        int base;
        int height;
    public:
        typeC();
        typeC(int b, int h){base = b; height = h;}
        void info()
        {
            cout << "Area of C label:";
            cout << endl << (this->base * this->height) / 2 << endl;
            cout << "typeC's type is " << this->getType() << endl;
            cout << "typeC's origin is " << this->getOrigin() << endl;
        }
};

Beer::Beer()
{
    type = "Heineken";
    origin = "Some country";
}

Beer::Beer(string t, string o)
{
    this->type = t;
    this->origin = o;
}



int main()
{
    typeA beerA(3);
    typeB beerB(5);
    typeC beerC(4, 3);

    beerA.info();
    beerB.info();
    beerC.info();
    
    
    return 0;
}