#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Exchange
{
    private:
        int Money;

    public:
        static int High;
        Exchange()
        {
            this->Money = rand() % 5001;
            if(this->Money > 3000)
                High++;
        }
};

int Exchange::High = 0;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    time_t Time = time(0);
    tm* Now = localtime(&Time);

    int currDay = Now->tm_mday;

    std::vector<Exchange> List;
    for(int i = 0; i < currDay; i++)
    {
        List.emplace_back();
    }
    
    cout << "Number of exchanges with more than 5000 units: " << Exchange::High << endl;
    return 0;

}