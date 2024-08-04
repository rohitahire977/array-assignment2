#include<iostream>
#include<vector>
//check if given arr is sorted or not.
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of array:";
    cin>>n;
    bool flag=true;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<flag<<endl;
    for(int i=0;i<n-2;i++){
        if(v[i]<v[i+1]){
            if(v[i+1]>v[i+2]){
                flag=0;
            }
        }
    }
    cout<<flag<<endl;
    if(flag==1){
        cout<<"array is sorted.";
    }
    else{
        cout<<"array is unsorted.";
    }
}