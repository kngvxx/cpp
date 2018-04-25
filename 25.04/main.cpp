#include <iostream>

using namespace std;

void hello_world();

int dodaj(int l1, int l2);

int main()
{
    hello_world();
    cout<<dodaj(5,13)<<endl;

    return 0;
}

void hello_world()
{
    cout << "Hello world!" << endl;
}

int dodaj(int l1, int l2)
{
    int suma=l1+l2;

    return suma;
}
