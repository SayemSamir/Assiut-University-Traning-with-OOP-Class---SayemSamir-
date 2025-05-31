#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
class Katryoshka{
  public:
  void result();
};
void Katryoshka::result()
{  
    long long numOfEyes, numOfMouths, numOfBodies;
    cin >> numOfEyes >> numOfMouths >> numOfBodies;
    long long temp = 0 , maxKatryoshkas = 0;
    temp = min({ numOfEyes,numOfBodies, numOfMouths });
    maxKatryoshkas += temp;
    numOfEyes -= temp;
    numOfBodies -= temp;
    numOfMouths -= temp;
    temp = min({ numOfEyes / 2,numOfBodies});
    maxKatryoshkas += temp;
    cout << maxKatryoshkas;
}
int main{
  Katryoshka obj;
  obj.result();
}
