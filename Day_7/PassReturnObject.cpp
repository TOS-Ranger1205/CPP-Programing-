#include<iostream>
using namespace std;

class Student{

    public : double marks;

    Student(double m){
        marks = m;
    }
};


void Avg(Student s1, Student s2){

    double Average = (s1.marks + s2.marks)/ 2;

    cout<<"Average Marks = "<< Average <<endl;

}


int main(){

    Student Student1(75.0),Student2(95.0);

    Avg(Student1,Student2);

    return 0;
}