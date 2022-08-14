#include <iostream>
#include <string>
using namespace std;
int d,n;
string temp;

int factorial(int n)
{
    if(n>1) return n*factorial(n-1);
    else return 1;
}

int main()
{
    cin>>d;
    for (int i=0; i<d; i++)
    {
        cin>>n;
        //cout<<factorial(n)<<endl;
        temp = to_string(factorial(n));
        int len=temp.length();
        if (len==1) cout<<"0"<<" "<<temp[len-1]<<endl;
        else cout<<temp[len-2]<<" "<<temp[len-1]<<endl;
    }
    return 0;
}
