#include<iostream>
using namespace std;

int main()
{
   string Name,Div;
   int Std,RollNo,Eng,Hin,Maths,SS,Sci;
  

  cout<<"Enter your Name :-"<<endl;
    cin>>Name;
  cout<<"enter your Std :-"<<endl;
    cin>>Std;  
  cout<<"enter your RollNo :-"<<endl;
    cin>>RollNo;
  cout<<"Enter your Marks out of 100 in Eng:-"<<endl;
    cin>>Eng;
  cout<<"Enter your Marks out of 100 in Hindi:-"<<endl;
    cin>>Hin;  
  cout<<"Enter your Marks out of 100 in Maths:-"<<endl;
    cin>>Maths;
  cout<<"Enter your Marks out of 100 in Social-Science:-"<<endl;
    cin>>SS;
  cout<<"Enter your Marks out of 100 in Science:-"<<endl;
    cin>>Sci;  
    

    int Total,Avg;
    float Percentage;
    // Total Marks
    Total =Eng+Hin+Maths+SS+Sci;
    
    // Average Marks
    Avg = Total/5;

    // Percentage Scored
    Percentage=Total/500;

    // Output...

    cout<<"Student Name:- "<<Name<<endl;
    cout<<"Std:- "<<Std<<endl;
    cout<<"RollNo:- "<<RollNo<<endl<<endl;
    cout<<"Report Card:- "<<endl;
    cout<<"Total Marks Obtained:- "<<Total<<endl;
    cout<<"Average Marks Obtained:- "<<Avg<<endl;
    cout<<"Percentage:- "<<Percentage<<endl;





    return 0;
}
