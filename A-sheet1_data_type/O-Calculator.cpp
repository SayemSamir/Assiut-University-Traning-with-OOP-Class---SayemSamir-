#include<iostream>
using namespace std;
class Calculator{
   public:
   void result();
 };
void Calculator::result(){
  int A,B;
  char s;
  cin>>A
  >>s>>B;
  if(s=='+'){
    cout<<A+B<<endl;
  }
  else if(s=='-'){
    cout<<A-B<<endl;
  }
  else if(s=='*'){
    cout<<A*B<<endl;
  }
  else if(s=='/'){
    cout<<A/B<<endl;
  }


}
int main(){
  Calculator obj;
  obj.result();
 }

