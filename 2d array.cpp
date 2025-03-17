#include <iostream>
#define MAX_SIZE 5
using namespace std;

int main()
{
   // 2D Array
    int marks2D[MAX_SIZE][MAX_SIZE];
    cout << "Enter marks for " << MAX_SIZE << " students in " << MAX_SIZE << " subjects: \n";
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            cin >> marks2D[i][j];
        }
    }
    cout << "Marks in 2D Array: \n";
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            cout << marks2D[i][j] << " ";
        }
        cout << endl;
 return 0;
}
