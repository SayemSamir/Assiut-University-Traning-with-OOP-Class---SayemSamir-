#include <iostream>
using namespace std;
class password{
public:
void result();
};
void password::result()
{
	int password;
	while (true)
	{
		cin >> password;
		if (password == 1999)
		{
			cout << "Correct" << endl;
			break;
		}
		else
		{
			cout << "Wrong" << endl;
		}
	}
}
int main(){
  password obj;
  obj.result();
}
