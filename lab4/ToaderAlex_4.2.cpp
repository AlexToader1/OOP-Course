#include <iostream>

using namespace std;

class Sticks
{
    public:
        int stick_pcs = 2;
};

class Diamond
{
    public:
        int Diamond_pcs = 3;
};

class DiamondPickaxe : public Sticks , public Diamond
{
    public:
        bool ironPic = false;
    
    void craftingTable()
    {
        if(this->stick_pcs >= 2 && this->Diamond_pcs >=3)
            ironPic = true;
    }

    DiamondPickaxe();
};

int main()
{

    cout << "   --- CRAFTING TABLE ---" << endl << endl;
    cout << "[Diamond] [Diamond] [Diamond]" << endl;
    cout << "[       ] [ Stick ] [       ]  ->  [Diamond Pickaxe]" << endl;
    cout << "[       ] [ Stick ] [       ]" << endl;

    return 0;
}

