#include<iostream>
using namespace std;
class condition{
   public:
   void result();
 };
void condition::result(){
  int A,B;
  cin>>A>>B;
  if(A>=B){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"No"<<endl;

  }
}
int main(){
  condition obj;
  obj.result();
 }

