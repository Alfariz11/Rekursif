#include<iostream>
using namespace std;

int f(int n) {
    int angka;
    if(n == 1) {
        angka = 3;
    } else {
        angka =f(n-1)+3;
        
    }
    cout <<angka<<", ";
    return angka;
};

int main() {
    cout<<f(5);
  
}