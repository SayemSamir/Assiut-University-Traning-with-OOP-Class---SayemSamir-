#include <iostream>
using namespace std;
class IntervalSweep{
  public:
  void result();
};
void IntervalSweep::result()
{ 
    short a, b;
    cin >> a >> b;
    ( (a == 0 && b == 0) or abs(a - b) > 1 ) ? cout << "NO" : cout << "YES";
}
int main(){
  IntervalSweep obj;
  obj.result();
}
