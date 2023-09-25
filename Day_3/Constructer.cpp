#include<iostream>
using namespace std;

class kp{

    public: kp(){
        cout<<"Patel's"<<endl;
    }

    public: kp(char web){
        cout<<"Patel.com"<<web<<endl;
    }

     public: kp(int num){
        cout<<"num : "<<num<<endl;
    }

};


int main(){

    kp obj;
    kp obj1;
    kp obj2(200);

    return 0;
}