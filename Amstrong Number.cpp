#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    
    int temp = num;
    
    int rem=0;
    int sum=0;
    
    while(num!=0)                   // 153
    {
        rem = num%10;               // 3 , 5 , 1
        sum += rem*rem*rem;         // (3*3*3)+(5*5*5)+(1*1*1) = 27+125+1 = 153
        num = num/10;               // 15 , 1
    }

    if(temp==sum)
    {
        cout<<"AMSTRONG NUMBER";
    }
    else
    {
        cout<<"NOT AN AMSTRONG NUMBER";
    }
    
    return 0;
}
