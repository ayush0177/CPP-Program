#include <iostream>
using namespace std;
void sum(int n){
  int sumof = 0;
  for(int i=1;i<=n;i++){
    if(i%2==0)
      sumof = sumof+i;
    // return sumof;
    if(i==n)
      cout<<sumof<<endl;
     

  }
}
int main() {
  int a;
  cout<<"enter the value of a "<<endl;
  cin>>a;
  sum(a);
  return 0;
}