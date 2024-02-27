#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

void addInteger(int size, int arr[]){

    for (int i = 0; i < size; i++){
        cin >> arr[i];
    }
    int sum = sumOfArray(arr,size);
    cout << "Sum of array is: " << sum << endl;
}

int main(){
    int size;
    
    cout << "Enter the size of array: ";
    cin >> size;
    
    int arr[size];
    
    addInteger(size, arr);

    return 0;
}