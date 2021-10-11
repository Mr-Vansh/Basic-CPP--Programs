#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    int divisor =0; 
    for(int i=1 ; i<=num ; i++)
    {
        if(num%i == 0)
        {
            divisor++;
        }

    }
    
    // divisor should not be greater than 2 becoz :-
    //PRIME NUMBER is the number which is divisible by 1 and itself
    if(divisor == 2) 
    {
        cout<<"PRIME number";
    }
    else
    {
        cout<<"NOT a prime number";
    }
    return 0;
}
