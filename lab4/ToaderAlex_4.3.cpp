#include <iostream>

using namespace std;

class Baza
{
    public:
        void metodaPublica()
        {
            cout << "metodaPublica" << endl;
        }

    private:
        void metodaPrivata()
        {
            cout << "metodaPrivata" << endl;
        }

    protected:
        void metodaProtected()
        {
            cout << "metodaProtected" << endl;
        }

};

class DerivataProtected : protected Baza
{
    public:
        void testAccesInterior()
        {
            metodaProtected();
            metodaPublica();
//            metodaPrivate();
        }
};

class DerivataPrivata : private Baza
{
    public:
        void testAccesInterior()
        {
            metodaProtected();
            metodaPublica();
//            metodaPrivate();
        }
};

int main()
{
    DerivataProtected objProt;
//    objProt.metodaPublica();
    objProt.testAccesInterior();

    DerivataPrivata objPriv;
//    objPriv.metodaPublica();
    objPriv.testAccesInterior();

    return 0;
}


/*
1. Dintre cele 3 apeluri nu merge metodaPrivate() deoarece la ele au acces doar alte functii din interiorul aceleiasi clase
si alte functii/ clase declarate friend clasei respective.
*/

/////////////////////////////////////////////////////////

/*
2. Functia main() este in afara clasei DerivataProtected, asa ca nu are acces la membrii ei protected. De aceea functia, incercand sa acceseze
un membru protected nu reuseste.
*/

/////////////////////////////////////////////////////////

/*
3. Membrii toti devin private si, la fel ca mai sus, main() nu poate accesa membri private ai mostenitorului.
*/