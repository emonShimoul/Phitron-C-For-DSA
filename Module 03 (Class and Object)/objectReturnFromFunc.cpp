#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa){
        this->roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
};

Student fun(){
    Student karim(22,5,3.7);
    return karim;
}

int main()
{
    Student obj = fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    
    return 0;
}