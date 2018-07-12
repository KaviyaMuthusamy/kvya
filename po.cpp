#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x<0)
    {
        cout<<"Negative";
    }
    else if(x>0)
    {
        cout<<"Positive";
    }
    else
    {
        cout<<"Zero";
    }
    return 0;
}
