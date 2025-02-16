
// IS THE PROCESS OF BUNDLING DATA (VARIABLES)AND METHODS(FUNCTIONS)THAT OPERATE ON THE DATA INTO A SINGLE UNIT(CLASS)
// WHILE RESTRICTING DIRECT ACCESS TO SOME OF THE OBJECTS DETAILS
//IMP3ORTANCE OF ENCAPULATION
/* 1 DATA HIDING,2 IMPROVED SECURITY ,3 BETTER CODE MAINTENANCE

// VOID SETDATA(INT STUDENTAGE){
   AGE = STUDENTAGE}
 */
 #include<iostream>
using namespace std;
 class employee{
 private:
    string name;
    int salary;
//setter for name
public:
  void setname(string num){
   name = num;}
   //setter for salary
  void setsalary(int slry){
   salary =slry;}
   //getter for name
   string getname(){
    return name;}
    //getter for salary
 int getsalary(){
  return salary;
  }
 };
 int main(){
 employee obj;
  obj.setsalary(3000);
 obj.setname("stephen");
cout<<"salary is "<<obj.getsalary()<<endl;
cout<<"name is "<<obj.getname()<<endl;
 return 0;
 }
