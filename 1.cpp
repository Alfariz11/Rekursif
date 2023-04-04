#include <iostream>
using namespace std;

int T(int n){
    if(n==0){
        return 6;
    }else if(n==1){
        return 0;
    }else if(n==5){
        return 1;
    }else {
        return 7*T(n-1)-6*T(n-2);
    }
}

int main(){
    cout<<T(7);
}
/*
f(7)=7(T6)-6(T5)=65059
f(6)=7(T5)-6(T4)=9295
f(5)=1
f(4)=7(T3)-6(T2)=-1548
f(3)=7(T2)-6(T1)=-252
f(2)=7(T1)-6(T0)=-36
f(1)=0
f(0)=6




*/