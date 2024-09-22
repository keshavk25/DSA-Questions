#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool divide(vector<int> vec){
    int totalSum, prefixSum=0,n=vec.size() ;

    for(int i=0; i<n;i++)
        totalSum+=vec[i];
    
    for(int i=0; i<n;i++){
        prefixSum+=vec[i];
        if(totalSum==2*prefixSum)
            return 1;
    }

    return 0;
}

int main(){

    int n;
    cout<<"Enter Numbers of element in arrry is: ";
    cin>>n;
    vector<int> vec(n);
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
        cin>>vec[i];
    
    cout<<divide(vec);

}