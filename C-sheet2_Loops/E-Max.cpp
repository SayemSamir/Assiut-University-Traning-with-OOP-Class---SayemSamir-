#include <iostream>
using namespace std;
class Max{
public:
void result();
};
void Max::result()
{
	int counter; 
	cin >> counter;
	int max = 0;
	for (int i = 1; i <= counter; i++)
	{
		int num;
		cin >> num;
		if (i == 1)
		{
			max = num;
		}
		if (num > max)
		{
			max = num;
		}
	}
	cout << max << endl;
}
int main(){
 Max obj;
  obj.result();
}
