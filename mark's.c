#include<iostream>
#include<cstring> 
using namespace std;


class student
{
private:
    
    void put_data()
    {
        
        cout << "Base class put_data called." << endl;
    }

protected:

    int roll_no;
    char name[20];

public:
    void get_data()
    {
        cout << "Enter roll_no and name of student: ";
       
        cin >> roll_no >> name;
    }
};


class marks : public student
{
private: // 
    int m1, m2, m3;
    int total;
    float percentage; 
public:
    void get_marks()
    {
        
        cout << "Enter marks of 3 subjects: ";
        cin >> m1 >> m2 >> m3;
    }

    void calculate_percentage() 
    {
        total = m1 + m2 + m3;
        percentage = (float)total / 3.0f; 
    }

    void display_marks()
    {
        cout << "\n--- Student Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: M1(" << m1 << ") M2(" << m2 << ") M3(" << m3 << ")" << endl;
        cout << "Total: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() 
{
    marks m;
    
    m.get_data(); 
    
    m.get_marks();
    m.calculate_percentage();
    m.display_marks();
    
    return 0;
}
