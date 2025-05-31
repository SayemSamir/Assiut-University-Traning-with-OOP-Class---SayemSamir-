#include<iostream>
using namespace std;
class print
{
public:
    void display();
};
void print::display()
{
    int N;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        cout<<i<<endl;
    }
}
int main()
{
    print obj;
    obj.display();
}
