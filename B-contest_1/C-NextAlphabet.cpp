#include <iostream>
using namespace std;
class alphabet{
  public:
  void result();
};
void alphabet::result()
{ 
    char letter;
    cin >> letter;
    (letter == 'z') ? cout << 'a' : cout << char(letter + 1);
}
int main() {
  alphabet obj;
  obj.result();
}
