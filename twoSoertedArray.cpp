#include<iostream>

using namespace std;

void sorttwoArray(int arr1[], int size1, int arr2[], int size2, int ans[]){

    int i = 0, j =0 ,k=0;

    while(i<size1 && j<size2){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            i++;

        }else{
            ans[k] =arr2[j];
            j++;
        }

        k++;
    }

    while(i<size1){
        ans[k] = arr1[i];
        i++;
        k++;
    }

    while(j<size2){
        ans[k] = arr2[j];
        j++;
        k++;
    }

}

int main(){
    int n1;
    cin >> n1;

    int arr1[100];

    for(int i = 0; i<n1; i++){
        cin>> arr1[i];
    }

    int n2; 
    cin >> n2;

    int arr2[100];

    for(int i = 0; i<n2; i++){
        cin>> arr2[i];
    }

    int ans[100];

    sorttwoArray(arr1,n1, arr2, n2 , ans);

    for(int i = 0; i<n1+n2; i++){

        cout << ans[i] << " " ;

    }


    return 0;
}
