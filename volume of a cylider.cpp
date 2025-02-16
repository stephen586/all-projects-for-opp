#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double radius,height,volume;

    //prompt the user to enter the radius and height of cylinder
    cout << "enter the radius of the cylinder: " << endl;
    cin >> radius;
    cout <<"enter the height of the cylinder: " << endl;
    cin >> height;
    //to calculate the volume and display the answer
    volume = M_PI *radius*radius*height;
    cout <<"the volume of the cylinder is: "<<volume<<endl;


    return 0;
}
