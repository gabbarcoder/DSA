#include<bits/stdc++.h>

using namespace std;

int charc(int a){
    if(a>=97 && a<=122)
    return 0;

    if(a>=65 && a<=90)
    return 1;

    return -1;
}

int main (){
    char i;
    cin>>i;
    cout<<i<<endl;

    int x=charc(i);

    cout<<x;
    return 0;
}