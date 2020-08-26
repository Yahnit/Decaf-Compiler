#include<iostream>
#include<stdio.h>

int b[10000000];

def merging(int a[1000000],int low, int mid, int high) {
	int l1, l2, i;

	for(l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i+=1) {
		if(a[l1] <= a[l2]){
			b[i] = a[l1];
      l1 +=1;
    }
		else{
			b[i] = a[l2];
      l2+=1;
    }
	}

	while(l1 <= mid){
		b[i] = a[l1];
    i +=1;
    l1+=1;
  }

	while(l2 <= high){
		b[i] = a[l2];
    i+=1;
    l2+=1;
  }

	for(i = low; i <= high; i+=1){
		a[i] = b[i];
  }
  return 0;
}


def sort(int a[1000000],int low, int high) {
	int mid;

	if(low < high) {
		mid = (low + high) / 2;
		sort(a,low, mid);
		sort(a,mid+1, high);
		merging(a,low, mid, high);
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
  int low = 0, high = n;
  sort(a,low, high);

  for(int i=0;i<n;i+=1){
    temp = a[i];
    cout << temp << " ";
  }

  return 0;
}
