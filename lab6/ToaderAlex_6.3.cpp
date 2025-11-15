#include <iostream>

//am facut asa sa vad care e hype-ul ca toata lumea scrie fara namespace std :)

class iLogger
{
    public:
        virtual void logMessage(std::string msg) = 0;
};

class Dispozitiv
{
    protected:
        std::string numeDispozitiv;
    
    public:
        Dispozitiv(std::string nume) : numeDispozitiv(nume) {}

        std::string getNume()
        {
            return numeDispozitiv;
        }

        virtual bool esteConectat() = 0;
};

class Imprimanta : public iLogger, public Dispozitiv
{
    private:
        bool conectat;
    
    public:
        Imprimanta(std::string nume, bool status) : Dispozitiv(nume), conectat(status) {}

        void logMessage(std::string msg) override
        {
            std::cout << "Log from " << getNume() << ": " << msg << std::endl;
        }

        bool esteConectat() override
        {
            return conectat;
        }
};

int main()
{
    Imprimanta imprimanta1("HP LaserJet", true);
    imprimanta1.logMessage("Imprimanta este pornita.");
    
    if (imprimanta1.esteConectat())
    {
        std::cout << imprimanta1.getNume() << " este conectata." << std::endl;
    }
    else
    {
        std::cout << imprimanta1.getNume() << " nu este conectata." << std::endl;
    }

    return 0;
}