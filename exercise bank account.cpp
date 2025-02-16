#include <iostream>

using namespace std;
 class bankaccount{
 private:
     string accountholder;
     double balance;
 public:
    void setaccountholder(string acc){
        accountholder = acc;
            }
    void setbalance(double bal){
         balance = bal;
         }
    string getaccountholder(){
         return accountholder;
         }
    double getbalance(){
      return balance;
      }
 };
int main()
{
    bankaccount ill;
    ill.setaccountholder("stephen");
    ill.setbalance(60000);
    cout<<"the holder is: "<<ill.getaccountholder()<<endl;
    cout<<"the balance is: "<<ill.getbalance()<<endl;
    return 0;
}
