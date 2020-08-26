def power(int a, int b){
  int ans = 1;

  for(int i=0;i<b;i+=1){
    ans = ans*a;
  }

  return ans;
}

main(){
  int a = power(4,3);
  cout << a << endl;
  return 0;
}
