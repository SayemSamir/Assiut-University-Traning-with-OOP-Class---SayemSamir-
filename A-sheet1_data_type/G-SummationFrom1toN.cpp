#include<iostream>
using namespace std;
class Summation{
  public:
  void result();
};
void Summation::result(){
    long long int N,Sum;
cin>>N;
Sum=((1+N)*N)/2;
cout<<Sum<<endl;
}
int main(){
  Summation obj;
  obj.result();
}
