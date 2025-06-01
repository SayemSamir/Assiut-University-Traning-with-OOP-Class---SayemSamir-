#include<iostream>
using namespace std;
class fibonacci
{
public:
    void result();
};
void fibonacci::result()
{
int a=0,b=1,c,N;
cin>>N;
for(int i=1;i<=N;i++)
{
cout<<" "<<a;
c=a+b;
a=b;
b=c;
}
}
    int main()
    {
    fibonacci obj;
    obj.result();
}
