#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter the number : " ;
    cin>>num;
    
    int sum=0;
    while(num!=0)           // 12345 , 1234 , 123 , 12 , 1 , 0
    {
        sum += num%10;      // 5 , 4 , 3 , 2 , 1 ===> ( 5+4+3+2+1 = 15 )
        num = num/10;       // 1234 , 123 , 12 , 1
    }
    
    cout<<"Sum of the giver number is : "<<sum; 
    
    return 0;
}
