#include<iostream>
#include<iomanip>
 using namespace std;
class Area{
  public:
  void result();
};
void Area::result(){
  const double PI = 3.141592653;
  double R;
  cin>>R;
   cout << fixed << setprecision(9) << PI * R * R <<endl;
}
int main(){
  Area obj;
  obj.result();
}
