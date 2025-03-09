#include <iostream>

using namespace std;
//base class
class person{
protected:
    string name;
public:
    void setname(string n){
       name=n;}
    string getname(){
     return name;
    }
};
//derived class
class librarymember: public person{
private:
    int memberid;
    int booksborrowed;
public:
    librarymember(string n, int id,int books){
    setname(n);
    memberid =id;
    booksborrowed = books;
    }
   int getmemberid(){
       return memberid;
   }
   int getbooksborrowed(){
     return booksborrowed;
   }

};
//derived class
class premiummember: public librarymember{
private:
    double membershipfee;
public:
    premiummember(string n, int id, int books, double fee):librarymember(n,id,books){
      membershipfee = fee;
    }
    double getmembershipfee(){
       return membershipfee;
    }
};
int main()
{
    premiummember pm("stephen kiai", 12345, 5, 50.0);
    cout << "Name: " << pm.getname() << endl;
    cout << "Member id: " << pm.getmemberid() << endl;
    cout << "Books Borrowed: " << pm.getbooksborrowed() << endl;
    cout << "Membership Fee: " << pm.getmembershipfee() << endl;

    return 0;
}
