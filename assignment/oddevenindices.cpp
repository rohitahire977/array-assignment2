#include<iostream>
#include<vector>
//difference of sum of indices at even place to odd place.
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            even+=v[i];
        }
        else{
            odd+=v[i];
        }
    }
    int diff=even-odd;
    cout<<"sum of indices at even place is:"<<even<<endl;
    cout<<"sum of indices at odd place is:"<<odd<<endl;
    cout<<"difference of sum of indices at even place to odd place is:"<<diff;
}