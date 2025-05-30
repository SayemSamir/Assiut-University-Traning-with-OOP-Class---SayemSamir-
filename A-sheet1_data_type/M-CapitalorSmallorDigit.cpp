#include<iostream>
using namespace std;
class CharacterChecker{
   public:
   void result();
 };
void CharacterChecker::result(){
 char ch;
 cin>>ch;
 if(ch>='0' && ch<='9'){
    cout<<"IS DIGIT"<<endl;
 }
 else if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z')){
         cout<<"ALPHA"<<endl;
         if(ch>='A' && ch<='Z'){
            cout<<"IS CAPITAL"<<endl;
         }
         else{
            cout<<"IS SMALL"<<endl;
         }
 }
 else{
    cout<<"INVALID CHARACTER"<<endl;
 }

}
int main(){
  CharacterChecker obj;
  obj.result();
 }

