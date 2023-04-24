#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string str,ans="";
    cin >> str;
    
    for(int i=0;i<str.size();i++){
        
        if(str[i]=='A' or str[i]=='a' or str[i]=='E' or str[i]=='e' or
          str[i]=='I' or str[i]=='i' or str[i]=='O' or str[i]=='o' or str[i]=='U' or str[i]=='u' )
            continue;
            
            else
             ans += str[i];
        
    }
    
    cout << ans << endl;
    
    return 0;
}
