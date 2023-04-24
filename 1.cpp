#include <bits/stdc++.h>
using namespace std;

bool solve(double n){
    
    if(n >=0){
        
         int x = sqrt(n);
        return (n == x*x);
        
    }
    
    return false;
    
}


int main(){
    
    int x,y;
    cin >> x >> y;
    vector<int>ans;
    
    for(int i=x;i<=y;i++){
        
       if(solve(i)){
           
           ans.push_back(i);
           
       }
        
    }
    
    for(auto i: ans){
        
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}