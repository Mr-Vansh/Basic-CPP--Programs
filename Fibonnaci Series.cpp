#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the range : ";
    cin>>num;
    
    int a=0;
    int b=1;
    int next=0;

    cout<<a<<" "<<b<<" ";    
    for(int i=2 ; i<num ; i++)
    {
        next = a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }

    return 0;
}
