#include <iostream>

using namespace std;

int main()
{  //array containing days of the week
    string days[]={"The first day of the week is Sunday","The third day of the week is Tuesday",
    "The fourth day of the week is Wednesday","TThe fifth day of the week is Thursday","The sixth day of the week is Friday",
    "The seventh day of the week is Saturday",};

    //loop through days array
    for(int i=0;i<6;i++){

    cout <<days[i]<< endl;
    }
    return 0;
}
