#include<stdio.h>
#include<iostream>

def function(int i, int k){
  int ans = 1;
  for(int j=0;j<k;j+=1){
    ans = ans*i;
  }
  return ans;
}

main(){
  int N, k;
  cin >> N >> k;

  int res = 0;
  for(int i = 1; i<= N; i+=1){
    res += function(i,k);
  }
  cout << res << endl;
}
