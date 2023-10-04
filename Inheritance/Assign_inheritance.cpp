#include<iostream>
using namespace std;

class father{

    public : void getfather(){

        cout<<"Welcome Back Father"<<endl;

    }
};

class beti : public father{

    public : void getbeti(){

        cout<<"Hello,beti"<<endl;

    }
};

class beta : public beti{

    public : void getbeta(){

        cout<<"Hello,beta"<<endl;

    }
};


int main(){

    beta obj;

    obj.getfather();
    obj.getbeti();
    obj.getbeta();

return 0;

}