#include<iostream>

using namespace std;


 class books{

    public : void getBook(){
    cout<<"welcome books"<<endl;
    }

};

class Author : public books{

    public : void getauthor(){
    cout<<"welcome author"<<endl;
    }

};

int main(){

Author obj;

obj.getBook();
obj.getauthor();

return 0;
}