#include<iostream>
#include <cmath>
using namespace std;
class TwoNumber{
  public:
  void result();
};
void TwoNumber::result(){
  double A,B;
  cin>>A>>B;
  double result=A/B;

   cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
   cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
   cout << "round " << A << " / " << B << " = " << round(result) << endl;
}
int main(){
  TwoNumber obj;
  obj.result();
}

