#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int number;
    cout<<"Enter any number : ";
    cin>>number;
    
    int sum=0;
    for(int i=1 ; i<number+1 ; i++)
    {
        sum += i;
    }
    
    cout<<"Sum is : "<<sum<<endl;
    return 0;
}
