//Krishna Chhabaria
//24070123149
//B3
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number of rows: ";
    cin >> a;
    cout << "Enter the number of columns: ";
    cin >> b;

    int c[100][100], d[100][100], s[100][100];
    cout << "ADDITION OF " << a << " X " << b << " MATRIX" << endl;

    cout << "Enter elements of first matrix:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> c[i][j];
        }
    }
    cout << "The  first matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "Enter elements of second matrix:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> d[i][j];
        }
    }
    cout << "The second matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << d[i][j] << "  ";
        }
        cout << endl;
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            s[i][j] = c[i][j] + d[i][j];
        }
    }

    cout << "Sum of the two matrices:"<<endl;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << s[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

/* 
Output :
Enter the number of rows: 2
Enter the number of columns: 2
ADDITION OF 2 X 2 MATRIX
Enter elements of first matrix:
Element [0][0]: 8
Element [0][1]: 6
Element [1][0]: 1
Element [1][1]: 4
The  first matrix is:
8  6
1  4
Enter elements of second matrix:
Element [0][0]: 5
Element [0][1]: 12
Element [1][0]: 7
Element [1][1]: 42
The second matrix is:
5  12
7  42
Sum of the two matrices:
13 18
8  46
*/