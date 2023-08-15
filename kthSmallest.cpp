#include<iostream>

using namespace std;

int kthSmallest(int arr[], int n , int k){
for(int j = 0; j<n; j++){


    for(int i = 0; i<n-1-j; i++){
        if(arr[i] > arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }


}
    return arr[k-1];

   
}

int main(){

    int n;
    cin >> n;

    int arr[100];

    for(int i =0; i<n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

  int ans =   kthSmallest(arr, n , k);

  cout << ans  << " ";


    return 0;
}