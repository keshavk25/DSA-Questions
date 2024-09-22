#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;


int main(){

    int  arr[5] ={ -1, -2 , -3, -4, -5};
   
    int prefix=0,ans=arr[0];
        
        for(int i=0; i<5; i++){
           
           prefix+= arr[i];
           if(prefix<0){
               ans = max(prefix,ans);
               prefix=0;
           }
           else
           ans = prefix;
        }
    cout<<ans;

}