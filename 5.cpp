#include <bits/stdc++.h>
using namespace std;


int main(){

    string str;
    cin >> str;
    
    int count=1;
    for(int i=0;i<str.size();i++){
        
        if(str[i] == str[i+1])
          ++count;
          
       else{
          
           if(count==1)
             cout << str[i];
           else
           cout << count << str[i];
           count=1;
       }
    }
    
 
    
    return 0;
}