#include<iostream>
using namespace std;

class kp{

    public: kp(){
        cout<<"Patel's"<<endl;
    }

     public: kp(int num){
        cout<<"num : "<<num<<endl;
    }

     public: kp(float n,int a){
        cout<<"Float: "<<n<<"  Int: "<<a<<endl;
    }
};


int main(){

    kp obj;
    kp obj1(200);
    kp obj2(1.3,45);

    return 0;
}