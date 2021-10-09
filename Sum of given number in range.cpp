#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num1;
    cout<<"Enter starting range : ";
    cin>>num1;
    
    int num2;
    cout<<"Enter ending range : ";
    cin>>num2;
    
    int sum=0;
    for(int i=num1 ; i<=num2 ; i++)
    {
        sum += i;
    }
    
    cout<<"Sum is : "<<sum<<endl;
    return 0;
}
