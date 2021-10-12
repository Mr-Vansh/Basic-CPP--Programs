#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number : " ;
    cin>>num;
    
    int temp = num;  // storing given number in TEMP variable
    
    int rem=0;
    int rev=0;
    
    while(num!=0)               
    {
        rem = num%10;  
        rev = rev*10 + rem; 
        num = num/10;          
    }
    
    if(temp==rev)  // checking if TEMP == REV 
    {
        cout<<"PALINDROME NUMBER";
    }
    else
    {
        cout<<"NOT A PALINDROME NUMBER";
    }
    
    return 0;
}
