#include<iostream>
using namespace std;

int main(){
    int N,countA,countB;
    countA = 0;
    countB = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N==0){
            break;
        }
        if(N%2==0){
            countA++;
        }
        if(N%2==1){
            countB++;
        }
    }
        cout << "#Even numbers = " << countA;
        cout << "\n#Odd numbers = " << countB;
        
    return 0;
}


