#include <iostream>
using namespace std;
void max(int a, int b, int c){
  if(a>b & a>c){
    cout<<"the maximum value is a "<<a<<endl;
  }
  else if (b>c & b>a){
    cout<<"the maximum value is b "<<b<<endl;
  }
  else{
    cout<<"the maximum value is c "<<c<<endl;
  }
  
}
int main() {
  int a;
  cout<< "enter the value of a "<<endl;
  cin>>a;
  int b;
  cout<<"enter the value of b "<<endl;
  cin>>b;
  int c;
  cout<<"enter the value of c "<<endl;
  cin>>c;
  max(a,b,c);
  return 0;
  
}