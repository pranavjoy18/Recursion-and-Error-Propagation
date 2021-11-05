#include <iostream>

int fibonacci(int n){
  
  if (n>=0 && n<2)      return n; //base case
    
  else  return fibonacci(n-1) + fibonacci(n-2); // recurrence relation
    
}

int main(){
    
    int N;
    cin>>N;
    
    cout<<fibonacci(N);
    
    return 0;
    
}
