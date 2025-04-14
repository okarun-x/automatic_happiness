#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize()
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int l=0;
    int r=n-1;
    bool flag=false;
    int mid;
    while(l<=r){
        mid=(l+r)/2;
        if(v[mid]==x){
            flag=true;
            break;
        }
        else if(v[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(flag==true){
        cout<<mid<<endl;
    }
    else{
        cout<<-1<<endl;
    }


    cout << "Time Complexity: O(log n)" << endl;
    cout << "Space Complexity: O(1)" << endl;
}
