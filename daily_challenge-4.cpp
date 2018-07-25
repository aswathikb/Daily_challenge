#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[100000];
    long int n,l,count = 0;
    cin>>n>>s;
    l = strlen(s);
    if(n > 26){
      cout<<"-1";  
    }
    else{
    for (int i = 0; i < strlen(s); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (s[j] == s[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }
    cout<<n-count;
}
    // your code goes here
    return 0;
}
