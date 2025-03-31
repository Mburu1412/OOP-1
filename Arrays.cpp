#include <iostream>

using namespace std;

int main() {
    // 1D Array Example
    int oneD[5] = {10, 20, 30, 40, 50};

    cout << "1D Array Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << oneD[i] << " ";
    }
    cout << endl;

    // 2D Array Example (Matrix)
    int twoD[2][3] = { {1, 2, 3}, {4, 5, 6} };

    cout << "2D Array Elements:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << twoD[i][j] << " ";
        }
        cout << endl;
    }

    // 3D Array Example (Multiple Matrices)
    int threeD[2][2][2] = { 
        { {1, 2}, {3, 4} }, 
        { {5, 6}, {7, 8} }
    };

    cout << "3D Array Elements:\n";
    for (int i = 0; i < 2; i++) {
        cout << "Matrix " << i + 1 << ":\n";
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << threeD[i][j][k] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}