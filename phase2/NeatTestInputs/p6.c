#include<iostream>
#include<stdio.h>

def sort(int arr[1000000], int n) {
  int i, key, j;
    for (i = 1; i < n; i+=1){
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

	return 0;
}

main(){
  int n,temp;
  int a[1000000];
  cin >> n;

  for(int i=0;i<n;i+=1){
    cin >> temp;
    a[i] = temp;
  }
  sort(a,n);

  for(int i=0;i<n;i+=1){
    temp = a[i];
    cout << temp << " ";
  }

  return 0;
}
