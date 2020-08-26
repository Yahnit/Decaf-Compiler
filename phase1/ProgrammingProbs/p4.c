#include<stdio.h>
#include<iostream>

int MAX = 100000000;

def checkPrime(int n){

  for(int i=2; i<n; i+=1){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

main(){
  int ans = 0;

  for(int z=0; z<=MAX; z+=1){
    for(int x=0; x<=z; x+=1){
      for(int y=0; y<=z; y+=1){
        if(x*x + y*y == z*z){
          ans += 1;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}
