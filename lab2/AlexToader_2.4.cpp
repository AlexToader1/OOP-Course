#include <iostream>
#include <fstream>

using namespace std;

class ManagerFisier
{
    private:
        std::ofstream fisier;
    public:
        ManagerFisier(const char* numeFisier)
        {
            fisier.open(numeFisier);
            if (fisier.is_open())
            {
                cout<<"Fisier deschis"<<endl;
            }
            else
            {
                cout<<"Eroare la deschiderea fisierului"<<endl;
            }

        }

        void scrieInFisier(const char* text)
        {
            if (fisier.is_open())
            {
                fisier << text << endl;
                cout<<"Text scris in fisier"<<endl;
            }
            else
            {
                cout<<"Eroare la deschiderea fisierului"<<endl;
            }
        }

        ~ManagerFisier()
        {
            if (fisier.is_open())
            {
                fisier.close();
            }
            cout<<"Fisier inchis"<<endl;
        }

};


int main()
{
    ManagerFisier m("fisier.txt");
    m.scrieInFisier("I love POO <3");
    return 0;
}
