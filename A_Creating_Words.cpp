#include <iostream>
#include <string>

using namespace std;

void swap_first_chars(string &a, string &b)
{
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        swap_first_chars(a, b);
        cout << a << " " << b << "\n";
    }
    return 0;
}
