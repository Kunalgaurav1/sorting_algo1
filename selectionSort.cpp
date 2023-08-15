#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        int min = i;

        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        swap(arr[min], arr[i]);
    }
}

int main(){

    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    SelectionSort(arr, 6);

    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}