#include<iostream>
using namespace std;


 int main(){
    int n,m, key;
    cin>>n>>m>>key;
    int a[n][m];
    for(int i=0; i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int s = 0, e= m-1;
    bool flag = false;
    while(e>0 && s<=n){
        if(a[s][e] == key){
            flag = true;    
        }
        else if(a[s][e]<key){
            s++;
        }else{
            e--;
        }
    }
    if(flag){
        cout<<"found";

    }
    else{
        cout<<"not found";
    }
    return 0;
 }