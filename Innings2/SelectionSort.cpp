#include<iostream>
using namespace std;
void selectionSort(int a[], int n){
    // cout << n;
    for(int i=0;i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[minIndex], a[i]);
    }
    cout<<"The sorted array is\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
}

int main(){
    int arr[]={11,17,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    return 0;
}