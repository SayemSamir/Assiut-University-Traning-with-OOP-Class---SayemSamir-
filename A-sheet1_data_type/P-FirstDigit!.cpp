#include<iostream>
using namespace std;
class FirstDigit{
   public:
   void result();
 };
void FirstDigit::result(){
  int X;
  cin>>X;
  int Firstdigit=X/1000;
  if(Firstdigit%2==0){
    cout<<"EVEN"<<endl;
  }
  else {
    cout<<"ODD"<<endl;
  }

}
int main(){
  FirstDigit obj;
  obj.result();
 }


