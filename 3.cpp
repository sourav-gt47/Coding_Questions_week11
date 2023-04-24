#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    int f=1;
  for(int i=1;i<=n;i++){
      
      f=f*i;
      
  }
    return f;
}


int main()
{
     
     // n=4 ...1+4+6+4+1 
     
     int n;
     cin >> n;
     
     long long sum=0;
     
     for(int i=0;i<=n;i++){
         
          sum += fact(n)/(fact(i)*fact(n-i)) ;
         
     }

  cout << sum << endl;
    return 0;
}
