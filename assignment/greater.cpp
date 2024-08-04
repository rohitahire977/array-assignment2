#include<iostream>
#include<vector>
using namespace std;
//count the no. of elements greater than x in array.
int main(){
    vector<int> arr;
    int n;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    }
    int count=0;
    int x;
    cout<<"enter any element x:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(x<arr[i]){
            count++;
        }
    }
    cout<<"the no. of elements greater than"<<x<<"are "<<count;

}