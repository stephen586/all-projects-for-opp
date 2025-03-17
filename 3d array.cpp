#include <iostream>
#define MAX_SIZE 5
using namespace std;

int main()
{
 // 3D Array

    int marks3D[MAX_SIZE][MAX_SIZE][MAX_SIZE];
    cout << "Enter marks for " << MAX_SIZE << " classes, " << MAX_SIZE << " students, " << MAX_SIZE << " subjects: \n";
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            for (int k = 0; k < MAX_SIZE; k++) {
                cin >> marks3D[i][j][k];
            }
        }
    }
    cout << "Marks in 3D Array: \n";
    for (int i = 0; i < MAX_SIZE; i++) {
        cout << "Class " << i + 1 << "\n";
        for (int j = 0; j < MAX_SIZE; j++) {
            for (int k = 0; k < MAX_SIZE; k++) {
                cout << marks3D[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
