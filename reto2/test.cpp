#include <array>
#include <iostream>

using namespace std;
int main()
{
    array<int, 10> a;
    cout << a.size() << '\n'; // prints 10
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << '\n'; // prints 10
    }
}