#include<iostream>
using namespace std;
class brother{
   public:
   void result();
 };
void brother::result(){
   string F1,S1,F2,S2;
   cin>>F1>>S1>>F2>>S2;
   if(S1==S2){
    cout<<"ARE Brothers"<<endl;
   }else{
     cout<<"NOT"<<endl;
   }
}
int main(){
  brother obj;
  obj.result();
 }

