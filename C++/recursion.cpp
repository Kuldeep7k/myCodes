#include <iostream>
#include <String>

using namespace std;


//Factorial
int fact (int num){
    if (num>0) {
        return num * fact(num-1);
    }
    else {
        return 1;
    }
}


//Fibonacii series
int fib(int n){
    if (n==0 || n==1){
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    cout << "Factorial :" << fact(4);
    cout << endl;
    cout << "Fibonacii :" << fib(4);
}