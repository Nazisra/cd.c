#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1,s;
    cin >> s1;  // input one string

  int x=0;
    for(int i=0;i<s1.size();i++){
       if(isalpha(s1[i])){
        s.push_back(s1[i]);
       }
  }
  
  for(int i=0;i<s.size();i++){
    s[i]=tolower(s[i]);
  }
   
  
   

  sort(s.begin(),s.end());

  s.erase(unique(s.begin(), s.end()), s.end());



  if(s.size()>=26){
    cout<<"its a pangram";
  }
  else 
  cout<<"its not a pangram";

}
