#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int duedate,returndate;
    int bookid;

    cout <<"enter your book id: "<<endl;
    cin >>bookid;
    cout <<"enter your return date: "<<endl;
    cin >>returndate;
    cout <<"enter your due date: "<<endl;
    cin >>duedate;
     // calculating days overdue for books borrowed
    int daysoverdue = returndate - duedate;
    int chargeperday = 0;
    int totalcharges = 0;
    string rate = "";
    //for looking at the charges as per the days due
    if(daysoverdue <= 0 ){
        cout <<"you are on time no fine."<<endl;
    }
    else{
        if(daysoverdue <= 7){
            chargeperday = 20;
            rate = "20 ksh ";
        }
        else {
            if (daysoverdue <= 14 ){
                chargeperday = 50;
                rate = "50 ksh";
            }
            else{chargeperday = 100;
            rate = "100 ksh";
            }
        }
    }
    totalcharges = chargeperday * daysoverdue;
    //for displaying users details

    cout << "Your book id is: "<< bookid << endl;
    cout <<"your duedate is: "<< duedate<<endl;
    cout <<"your returndate is: "<< returndate<<endl;
    cout << "your daysoverdue are: "<< daysoverdue<<endl;
    cout <<"the fine rate is :"<<rate<<endl;
    cout <<"your total charges is: "<< totalcharges <<endl;
    return 0;
}
