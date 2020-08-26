#include<stdio.h>
#include<iostream>

main(){
  int n,m,x;
  cin >> n >> n;
  int A[100][100], B[100][100], C[100][100];

  for(int i=0;i<n;i+=1){
    for(int j=0;j<n; j+=1){
      cin >> x;
      A[i][j] = x;
    }
  }

  for(int i=0;i<n;i+=1){
    for(int j=0;j<n; j+=1){
      cin >> x;
      B[i][j] = x;
    }
  }

  int temp;
  for(int i=0;i<n;i+=1){
    for(int j=0;j<n; j+=1){
      temp = 0;
      for(int k=0; j<n; k+=1){
        temp += A[i][k] * B[k][j];
        C[i][j] = temp;
        cout << temp << " ";
      }
    }
    cout << endl;
  }


  return 0;
}
