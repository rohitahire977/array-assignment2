//write a program to find largest 3 elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n;
    int l1=0;
    int l2=0;
    int l3=0;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>l1){
            l1=arr[i];
        }
    }
    cout<<"the first largest no. is:"<<l1<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<l1){
            if(arr[i]>l2){
                l2=arr[i];
            }
        }
    }
    cout<<"the second largest no. is:"<<l2<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<l2){
            if(arr[i]>l3){    
                l3=arr[i];
        }
    }
}
    cout<<"the third largest no. is:"<<l3 ;
}