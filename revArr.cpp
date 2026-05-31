#include<iostream>
using namespace std;

void reverseArray(int arr[], int st, int end){
    if(st >= end) return;
    swap(arr[st], arr[end]);
    reverseArray(arr, st + 1, end - 1);
}
int main(){
    int arr[] = {1,2,5,2};
    int n = 4,st = 0,end=3;
    reverseArray(arr,st,end);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}