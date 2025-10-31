#include <iostream>
using namespace std;

class ContBancar
{
    private:

        string AccountOwner;
        double Balance;
        static double InterestRate;
    
    public:

        const string getAccountOwner()
        {
            return this->AccountOwner;
        }

        double getBalance()
        {
            return this->Balance;
        }

        void Addfunds(double amount)
        {
            this->Balance = this->Balance + amount;
        }

        void Withdrawfunds(double amount)
        {
            if(amount > this->Balance)
                cout << "Insufficient funds!" << endl;
            else
                this->Balance = this->Balance - amount;
        }

        static void setNewRate(double newrate)
        {
            InterestRate = newrate;
        }

        void applyInterestRate()
        {
            this->Balance = this->Balance + this->Balance * InterestRate;
        }

        ContBancar(string name, double bal);
};

double ContBancar::InterestRate = 0.5;

ContBancar::ContBancar(string name, double bal)
{
    this->Balance = bal;
    this->AccountOwner = name;
}

int main()
{
    ContBancar owner1("Dani Mocanu", 9999);
    ContBancar owner2("Batman", 878);

    owner1.Withdrawfunds(700);
    cout << "Money after withdrawal: " << owner1.getBalance() << endl;

    owner2.Addfunds(1000);
    cout << "Money after adding: " << owner2.getBalance() << endl;

    cout << "What is the new interest rate?" << endl;
    cout << "-->";

    int newrate;

    cin >> newrate;

    ContBancar::setNewRate(newrate);

    cout << "Thank you, this is your new balance after interest." << endl;
    
    owner1.applyInterestRate();

    cout << owner1.getBalance() << endl;

    return 0;
}