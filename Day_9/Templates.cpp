#include<iostream>
using namespace std;


template <typename T> T myMax(T num1, T num2){

    return(num1>num2)?num1:num2;
}

int main()
{
	// Call myMax for int
	cout << myMax<int>(3, 7) << endl;
	// call myMax for double
	cout << myMax<double>(3.0, 7.0) << endl;
	// call myMax for char
	cout << myMax<char>('g', 'e') << endl;
    // call myMax for float
	cout << myMax<float>(3.0, 7.0) << endl;

	return 0;
}
