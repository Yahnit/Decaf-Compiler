#include<stdio.h>
#include<iostream>

def checkPrime(int n){

  for(int i=2; i<n; i+=1){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

main(){
  int N;
  cin >> N;
  int ans = 0;

  for(int i=2; i<N; i+=1){
    if(checkPrime(i) == true){
      ans += i;
    }
  }
  cout << ans << endl;

  return 0;
}
