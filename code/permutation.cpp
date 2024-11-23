#include <iostream>
#include<vector>
#include <algorithm>

// Optimize solution

using namespace std;

void per(int ind,int arr[3], int n){
    if(ind== n){
           
        for(int i=0;i<3;i++){
            cout<<arr[i];
        } 
        cout<<endl;
        return;
    }

    for(int i = ind; i<n ; i++){
        swap(arr[ind],arr[i]);
        per(ind+1,arr,3);
        swap(arr[ind],arr[i]);
    }
}

int main(){
   int arr[3]={1,2,3};
    int ans[3][3];
    per(0,arr,3);


return 0;
}