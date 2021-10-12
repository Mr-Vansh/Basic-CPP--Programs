#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number : " ;
    cin>>num;
    
    int rem;
    int rev=0;
    
    while(num!=0)               // 12345  , 1234 , 123 , 12 , 1
    {
        rem = num%10;           // rem = 5 , 4 , 3 , 2 , 1  
        rev = rev*10 + rem;    // rev = 5 , 4 , 3 , 2 , 1  
        num = num/10;          // num = 1234 , 123 , 12 , 1 , 0
    }
    
    cout<<"Reverse of the given number is : "<<rev; 
    
    return 0;
}
