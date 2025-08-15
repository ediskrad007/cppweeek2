#include <iostream>
using namespace std;

int main(){
    int n = 2;
    int m = 3;
    int arr1[n][m];
    int arr2[m][n];
    cout << "Enter elements for 2x3 matrix:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Enter row " << i << " col " << j << ": ";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter elements for 3x2 matrix:" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << "Enter row " << i << " col " << j << ": ";
            cin >> arr2[i][j];
        }
    }

    // Print both input matrices in grid form
    cout << "First matrix (2x3):" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Second matrix (3x2):" << endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int arrResult[n][n] = {0};
    // n*m x m*n = n*n
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arrResult[i][j] = 0;
            for(int k = 0; k < m; k++){
                arrResult[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    cout << "Resultant matrix:" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arrResult[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}