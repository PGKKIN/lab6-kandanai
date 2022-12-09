#include <iostream>

using namespace std;
int n=1;
int y=0;
int z=0;
int main()
{

    while (n!=0)
    {
        cout<<"Enter an integer: ";
        cin>>n;
        n=n;
        if(n%2==0)
        {
            y+=1;
        }
        else
        {
            z+=1;
        }

    }
    cout<<"#Even numbers = ";
    cout<<y-1<<"\n";
    cout<<"#Odd numbers = ";
    cout<<z;
    return 0;
}