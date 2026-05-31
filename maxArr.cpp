#include<iostream>
using namespace std;
int findMax(int arr[], int n){
    if(n == 1) return arr[0];
    return max(arr[n-1], findMax(arr, n-1));
}
int main(){
    int arr[] = {1,2,3,33,322};
    int n =5;
    cout<<findMax(arr,n);
}