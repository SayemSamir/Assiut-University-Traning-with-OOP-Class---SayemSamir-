#include<iostream>
using namespace std;
class EvenOddPOsitive{
  public:
  void result();
};
void EvenOddPOsitive::result(){
  int counter;
  cin>>counter;
  int even=0, odd=0, pos=0, neg=0;
  for(int i=1;i<=counter;i++){
    int N;
    cin>>N;
    if(N%2==0){
        even++;
    }
    else{
        odd++;
    }
    if(N>0){
        pos++;
    }
    else if(N<0){
        neg++;
    }
  }
  cout<<"Even: "<<even<<endl;
  cout<<"Odd: "<<odd<<endl;
  cout<<"Positive: "<<pos<<endl;
  cout<<"Negative: "<<neg<<endl;

}
int main(){
 EvenOddPOsitive obj;
 obj.result();
 }
