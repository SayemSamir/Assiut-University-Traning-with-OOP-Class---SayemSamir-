#include<iostream>
using namespace std;
class SayHello{
  public:
  void result();
};
void SayHello::result(){
  int n1;
  long long n2;
  char c;
  float n3;
  double n4;
  //Sayem uddin samir
  cin>> n1 >> n2 >> c >> n3 >> n4;
  cout<<n1<<endl;
  cout<<n2<<endl;
  cout<<c<<endl;
  cout<<n3<<endl;
  cout<<n4<<endl;
}
int main(){
  SayHello obj;
  obj.result();
}
