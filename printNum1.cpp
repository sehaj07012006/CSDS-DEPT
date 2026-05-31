#include<iostream>
using namespace std;
int printNum1(int N){
    if(N == 0){
        return 1;
    }
    else{  
        printNum1(N-1);
        cout<<N<<endl;
    }
}
int main(){
    printNum1(5);
}