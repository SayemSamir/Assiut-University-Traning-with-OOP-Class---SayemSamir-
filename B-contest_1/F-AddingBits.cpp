#include <iostream>
using namespace std;
class Bits{
 public:
 void result();
};
void Bits::result()
{  
    int A, B;
    cin >> A >> B;
    cout << (A ^ B);
}
int main() {
  Bits obj;
  obj.result();
}
