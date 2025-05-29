#include<iostream>
using namespace std;
class data{
  public:
  void type();
};
void data::type(){
  string name;
  cin>>name;
  cout<<"Hello, " << name;
}
int main(){
    data obj;
    obj.type();
}
