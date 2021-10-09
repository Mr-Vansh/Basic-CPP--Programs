#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int number;
    cout<<"Enter any number : ";
    cin>>number;
    
    if(number<0)
    {
        cout<<"It's a NEGATIVE number.";
    }
    else if(number==0)
    {
        cout<<"Neither negative nor Positive number.";
    }
    else
    {
        cout<<"It's a POSITIVE number.";
    }
    
    return 0;
}
