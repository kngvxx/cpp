#include <iostream>

using namespace std;

void hello_world();
string hello_world(int a); //Prze³adowanie funkcji

int dodaj(int l1, int l2);

int main()
{
    hello_world();
    cout<<hello_world(1)<<endl;
    cout<<dodaj(5,13)<<endl;

    return 0;
}

void hello_world()
{
    cout << "Hello world!" << endl;
}

string hello_world(int a)
{
    return "Hello World";
}

int dodaj(int l1, int l2)
{
    int suma=l1+l2;

    return suma;
}
