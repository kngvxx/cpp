#include <iostream>

using namespace std;

//int calkowita;
//float wymierna;

int n;
int m;


int main()
{

    cin>>n;
    cin>>m;

    for(int i=1;i<m;i++)
    {
        if(i%n==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
