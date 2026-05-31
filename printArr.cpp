#include<iostream>
using namespace std;

void printArray(int arr[], int n, int i){
    if(i == n) return;
    cout << arr[i] << " ";
    printArray(arr, n, i + 1);
}
int main(){
    int arr[]={1,2,1,2,3};
    int n = 5,i=0;
    printArray(arr,n,i);
}