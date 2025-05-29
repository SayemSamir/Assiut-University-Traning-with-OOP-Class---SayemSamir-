#include<iostream>
 using namespace std;
class difference{
  public:
  void result();
};
void difference::result(){
long long int A,B,C,D,X;
cin>>A;
cin>>B;
cin>>C;
cin>>D;
 X=(A*B)-(C*D);
cout<<"Difference = "<<X;
}
int main(){
  difference obj;
  obj.result();
}
