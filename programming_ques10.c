#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int arr1[n/2],arr2[n/2],x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr1[x]=arr[i];
            x++;
        }
        else if(arr[i]>0){
            arr2[y]=arr[i];
            y++;
        }
    }
    x=0,y=0;
    for(int i=0;i<n;i++){
        int m=i%2;
        if(m==0){
            cout<<arr2[y] <<" ";
            y++;
        }
        else { 
            cout<<arr1[x] <<" ";
            x++;
        }
    }
    return 0;
}
