#include<iostream>
 using namespace std;
class summation{
  public:
  void result();
};
void summation::result(){
    long long N, M;
    cin>> N >> M ;
    int lastnum1 = N % 10;
    int lastnum2 = M % 10;
    cout<< lastnum1 + lastnum2 <<endl;

}
int main(){
  summation obj;
  obj.result();
}
