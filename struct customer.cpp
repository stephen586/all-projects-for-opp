#include <iostream>

using namespace std;

struct customer{
 string name;
 double accountbalance;
 string lasttransaction;
};
void displaycustomer(const customer &c){
  cout<<"enter your name: "<<c.name<<endl;
  cout<<"enter your account balance: "<<c.accountbalance<<endl;
  cout<<"enter your last transaction: "<<c.lasttransaction<<endl;

}

int main()
{
  customer customer1, customer2;

    // customer one
    cout << "Enter details for customer 1:  "<<endl;
    cout << "enter name: "<<endl;
    cin>>customer1.name;

    cout << "Account Balance: "<<endl;
    cin >> customer1.accountbalance;
    cout << "Last Transaction: "<<endl;
    cin>> customer1.lasttransaction;

    //  customer two
    cout << "Enter details for customer 2: "<<endl;
    cout << "enter name: "<<endl;
    cin>> customer2.name;

    cout << "Account Balance: "<<endl;
    cin >> customer2.accountbalance;
    cout << "Last Transaction: "<<endl;
    cin>> customer2.lasttransaction;

    // Display customer details
    cout << "Customer Details: "<<endl;
    displaycustomer(customer1);
    displaycustomer(customer2);

    return 0;

}
