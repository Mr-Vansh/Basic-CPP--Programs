#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    sort(arr, arr+n);
    cout<<"Smallest number is : "<<arr[0];
    
    return 0;
}
