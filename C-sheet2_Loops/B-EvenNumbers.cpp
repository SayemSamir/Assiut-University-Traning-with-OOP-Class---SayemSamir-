#include<iostream>
using namespace std;
class numbercheck
{
public:
    void result();
};
void numbercheck::result()
{
    int N;
    cin>>N;
    int found = 0;
    for (int i = 2; i <= N; i += 2) {
        cout<<i<<endl;
        found = 1;
    }
    if (found==0) {
            cout<<"-1\n";
    }
}
    int main()
    {
    numbercheck obj;
    obj.result();
}


/*
#include <iostream>
using namespace std;
class numbercheck
{
public:
    void result();
};
void numbercheck::result()
{
	int counter;
	cin >> counter;
	if (counter == 1)
	{
		cout << -1;
		return 0;
	}
	for (int i = 1; i <= counter; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}
}
 int main()
    {
    numbercheck obj;
    obj.result();
}
*/
