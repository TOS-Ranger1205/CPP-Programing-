#include<iostream>
using namespace std;

class cwp{

    public: cwp(){
        cout<<"codeswithpankaj.com"<<endl;
    }

     public: cwp(int num){
        cout<<"num : "<<num<<endl;
    }

};


int main(){

    cwp obj;
    cwp obj1(200);

    return 0;
}