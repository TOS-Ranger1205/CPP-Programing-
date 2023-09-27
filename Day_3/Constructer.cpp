#include<iostream>
using namespace std;

class kp{

    public: kp(){
        cout<<"Patel's"<<endl;
    }

     public: kp(int num){
        cout<<"num : "<<num<<endl;
    }

};


int main(){

    kp obj;
    kp obj2(200);

    return 0;
}