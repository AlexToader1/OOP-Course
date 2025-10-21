#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    float* grades;   
    int numGrades;    

public:

    Student(const std::string& studentName, int count)
        : name(studentName), numGrades(count)
    {
        grades = new float[numGrades]; 
        for (int i = 0; i < numGrades; ++i)
            grades[i] = 0.0f;        
    }

    ~Student() {
        delete[] grades;  // clean up allocated memory
    }

    void setGrade(int index, float value) {
        if (index >= 0 && index < numGrades)
            grades[index] = value;
    }

    void print() const {
        std::cout << "Name: " << name << "\nGrades: ";
        for (int i = 0; i < numGrades; ++i)
            std::cout << grades[i] << ' ';
        std::cout << '\n';
    }
};

int main() {
    Student s("Alice", 3);
    s.setGrade(0, 9.5f);
    s.setGrade(1, 8.0f);
    s.setGrade(2, 10.0f);
    s.print();

    Student s2 = s;

    s2.setGrade(0, 7.0f);
    s.print();
    s2.print();
   
    //se schimba ambele obiecte din cauza shallow copy-ului


    return 0;
}
