#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    //prompt the user to enter their name
    cout<< "enter your name." << endl;
    cin>>name;
    //to display users name
    cout<<"your name is"<<name<<endl;

    //prompt user to enter their age
    cout<<"enter your age"<<endl;
    cin>>age;
    if (age >=18){
        cout<<"you are legible for voting";
    }
    else{
        cout<<"you are not allowed to vote";
    }
    return 0;
}
