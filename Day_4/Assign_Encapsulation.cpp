#include<iostream>
using namespace std;

class patel{

    string name;
    int age;
    float height;

    public : void setname(string FirstName){
        name = FirstName;
    }


    public : void setage(int MyAge){
        age = MyAge;
    }


    public : void setheight(float MyHeight){
        height = MyHeight;
    }

    public : string getname(){
        return name;
    }

    public : int getage(){
        return age;
    }

    public : float getheight(){
        return height;
    }
};

int main(){

    patel obj;
    obj.setname("Kush Patel");
    obj.setage(18);
    obj.setheight(5.9);
    cout<<"Your Name is "<<obj.getname()<<endl;
    cout<<"Age = "<<obj.getage()<<endl;
    cout<<"Height = "<<obj.getheight()<<endl;

    return 0;
}