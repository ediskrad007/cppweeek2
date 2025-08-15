#include <iostream>
using namespace std;

double computeAverage(const int arr[], int size){
    double sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum/size;
}

int findMin(const int arr[], int size){
    int min = arr[0];
    for(int i = 1; i < size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int findMax(const int arr[], int size){
    int max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){

    int size = 10;
    int arr[size];
    cout << "Enter num in each element: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Array contents: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << "\nAverage = " << computeAverage(arr,size) << endl;
    cout << "Min = " << findMin(arr,size) << endl;
    cout << "Max = " << findMax(arr,size) << endl;

    return 0;
}