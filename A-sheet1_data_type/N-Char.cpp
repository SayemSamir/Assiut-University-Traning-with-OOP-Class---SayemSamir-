#include<iostream>
using namespace std;
class difference{
   public:
   void result();
 };
void difference::result(){
 char ch;
 cin>>ch;
 if(ch>=97 && ch<=122){
    ch-=32;
 }else{
    ch+=32;
 }
 cout<<ch<<endl;

}
int main(){
  difference obj;
  obj.result();
 }

