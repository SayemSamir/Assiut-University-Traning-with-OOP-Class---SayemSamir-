#include <iostream>
#include <iomanip>
using namespace std;
class WinterSale{
 public:
 void result();
};
void WinterSale::result()
{
    short discountPercentage;
    double priceAfterDiscount;
    cin >> discountPercentage >> priceAfterDiscount;
    double originalPrice = priceAfterDiscount / (1 - (discountPercentage / static_cast<float>(100)));
    cout << fixed  << setprecision(2) << originalPrice;
}
int main(){
  WinterSale obj;
  obj.result();
}
