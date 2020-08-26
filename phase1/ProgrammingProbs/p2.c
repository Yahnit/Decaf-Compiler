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
  bool result = checkPrime(N);

  if(res == true){
    cout << "Yes, the number is prime" << endl;
  }
  else{
    cout << "Oops!, the number is not prime" << endl;
  }

  return 0;
}
