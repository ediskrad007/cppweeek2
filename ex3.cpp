#include <iostream>
using namespace std;

int factorialIter(int n){
    int sum = 1;
    for(int i = 0; i < n; i++){
        sum *= n - i;
    }
    return sum;
}

int factorialRec(int n){
    if (n == 0){
        return 1;
    }
    return n * factorialIter(n-1);
}

int main(){

    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "interative = " << factorialIter(n) << endl;
    cout << "recursive = " << factorialRec(n) << endl;
    cout << "Counter = ";
    for(int i = n; i > 0; i--){
        cout << i;
        if(i != 1){
            cout << " * ";
        }
    }
    return 0;
}