#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream Myfile("PatelonSale.txt");


    Myfile<<"Files can be tricky, but it is fun enough Hehe!\n";

    Myfile.close();

}