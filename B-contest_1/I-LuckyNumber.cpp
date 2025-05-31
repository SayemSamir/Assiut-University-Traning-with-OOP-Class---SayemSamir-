#include <iostream>
using namespace std;
class LuckyNumber{
  public:
  void result();
};
void LuckyNumber::result()
{
    short num;
    cin >> num;
    if (num % 10 == 0)
    {
        cout << "YES";
        return 0;
    }
    short firstDigit = num / 10;
    short secondDigit = num % 10;
    (firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0) ? cout << "YES" : cout << "NO";
}
int main(){
  LuckyNumber obj;
  obj.result();
}
