#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b){
    
    if(a == b)
    return a;
    
    else if(a > b)
    return gcd(a-b,b);
    
    else
    return gcd(a,b-a);
    
}


int main()
{
    
    int n;
    cin >> n;
    vector<int> v;
    
    while(n>0){
        
        int rem= n%10;
        v.push_back(rem);
        n/=10;
        
    }
  
  
  
    int result=v[0];
    for(int i=1;i<v.size();i++){
        
       result =  gcd(result,v[i]);
       
       if(result == 1)
         {
             
             break;
             
         }
        
    }
    cout << result;
    cout << endl;
   

    return 0;
}
