#include<iostream>
using namespace std;
int findMin(int arr[], int n){
    if(n == 1) return arr[0];
    return min(arr[n-1], findMin(arr, n-1));
}
int main(){
    int arr[] = {-21,1,2,3,33,322};
    int n =5;
    cout<<findMin(arr,n);
}