#include <iostream>

using namespace std;
 class car{
 public:
     string brand;
     string model;
     float price;
     int mileage;

     //constructor to initialize the data members
 car(string b,string m,float p,int mil) : brand(b),model(m),price(p),mileage(mil){}

void display(){
  cout <<"the car model is : "<<model<<endl;
  cout <<"the car price is : "<<price<<endl;
  cout <<"the mileage gone is : "<<mileage<<endl;
}
  void drive(int distance){
     mileage += distance;
     cout<<"distance driven is "<<distance<<" miles.updated mileage: "<<mileage<<endl;
 }
};
int main()
{
    car mycar ("toyota","corolla",20000,5000);
    //to display the cars details
    mycar.display();
    //when driven for 150 mies
    mycar.drive(150);
    //when driven for 300 miles
    mycar.drive(300);

    return 0;
}
