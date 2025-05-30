#include<iostream>
using namespace std;
class multiple{
   public:
   void result();
 };
void multiple::result(){
  int A,B;
  cin>>A>>B;
  if(A%B==0 || B%A==0){
    cout<<"Multiples"<<endl;
  }
  else{
    cout<<"No Multiples"<<endl;

  }
}
int main(){
  multiple obj;
  obj.result();
 }

