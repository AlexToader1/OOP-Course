#include <iostream>
#include <string>

using namespace std;

class Student
{
    private:
        string name;
        string surname;
        string CNP;
        int birthYear;
        string uniName;
        int uniYear;
        string gender;
        
    public:
        string getName()
        {
            return this->name;
        }
        string getSurname()
        {
            return this->surname;
        }
        string getCNP()
        {
            return this->CNP;
        }
        int getBirthYear()
        {
            return this->birthYear;
        }
        string getUniName()
        {
            return this->uniName;
        }
        int getUniYear()
        {
            return this->uniYear;
        }
        string getGender()
        {
            return this->gender;
        }
        void setGender()
        {
            if(CNP[0] == '1' || CNP[0] == '5')
                this->gender = "Male";
            else if(CNP[0] == '2' || CNP[0] == '6')
                this->gender = "Female";
        }

        void setStudentInfo(string fname, string lname, string ID, int byear, string uname, int uyear)
        {
            this->name = fname;
            this->surname = lname;
            this->CNP = ID;
            this->birthYear = byear;
            this->uniName = uname;
            this->uniYear = uyear;
        }

        string GenerateCNP(int birthYear, string gender);

        void showGender(string CNP)
        {
            if(CNP[0] == '1' || CNP[0] == '5')
                cout << "Gender: Male" << endl;
            else if(CNP[0] == '2' || CNP[0] == '6')
                cout << "Gender: Female" << endl;
        }

        int showAge(string CNP)
        {
            int year = (CNP[1] - '0') * 10 + (CNP[2] - '0');
            return 2025 - (1900 + year);
        }
};

string Student::GenerateCNP(int year, string g)
{
    string CNP;
    if(year < 2000)
    {
        if(g == "Male")
            CNP += '1';
        else if(g == "Female")
            CNP += '2';
    }
    else
    {
        if(g == "Male")
            CNP += '5';
        else if(g == "Female")
            CNP += '6';
    }

    CNP += to_string(year % 100);
    if(rand() % 31 +1 < 10)
        CNP += "0" + to_string(rand() % 31 + 1);
    else
        CNP += to_string(rand() % 31 + 1);

    if(rand() % 12 +1 < 10)
        CNP += "0" + to_string(rand() % 12 + 1);
    else
        CNP += to_string(rand() % 12 + 1);
    
    CNP += to_string(rand() % 999 + 1);
    CNP += to_string(rand() % 9 + 1);

    return CNP;
}

void showDiff(int UniYear, int birthYear)
{
    cout << "Difference between University Year and Birth Year: " << UniYear - birthYear << endl;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Student student;
    student.setStudentInfo("Dani", "Mocanu", "", 1996, "UPB", 1818);
    string generatedCNP = student.GenerateCNP(1996, "Male");
    cout << "Generated CNP: " << generatedCNP << endl;
    student.showGender(generatedCNP);
    cout << "Student Age: " << student.showAge(generatedCNP) << endl;
    
    return 0;
}
