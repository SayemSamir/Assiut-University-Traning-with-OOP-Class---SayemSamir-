#include <iostream>
using namespace std;
class Memo{
 public:
 void result();
};
void Memo::result()
{ 
    long long A, B, K;
    cin >> A >> B >> K;
    if (A % K != 0 && B % K != 0)
    {
        cout << "No One";
        return 0;
    }
    else if (A % K == 0 && B % K == 0)
    {
        cout << "Both";
        return 0;
    }
    if (A % K == 0)
        cout << "Memo";
    else
        cout << "Momo";
}
int main() {
  Memo obj;
  obj.result();
}
