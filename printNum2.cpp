#include<iostream>
using namespace std;
int printNum1(int N){
    if(N == 0){
        return 1;
    }
    else{  
        
        cout<<N<<endl;
        printNum1(N-1);
    }
}
int main(){
    printNum1(5);
}