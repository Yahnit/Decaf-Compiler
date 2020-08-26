#include<iostream>
#include<stdio.h>

def getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i+=1){
        if (arr[i] > mx){
            mx = arr[i];
          }
      }
    return mx;
}

def countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10];

    for (i = 0; i < n; i+=1){
        count[ (arr[i]/exp)%10 ]+=1;
      }

    for (i = 1; i < 10; i+=1){
        count[i] += count[i - 1];
      }

    for (i = n - 1; i >= 0; i-=1){
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i+=1){
        arr[i] = output[i];
      }
}

def radixsort(int arr[], int n){
    int m = getMax(arr, n);

    for (int exp = 1; m/exp > 0; exp *= 10){
        countSort(arr, n, exp);
      }
}

main(){
  int n,temp;
  int a[1000000];
  cin >> n;

  for(int i=0;i<n;i+=1){
    cin >> temp;
    a[i] = temp;
  }
  radixsort(a,n);

  for(int i=0;i<n;i+=1){
    temp = a[i];
    cout << temp << " ";
  }

  return 0;
}
