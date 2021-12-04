#include <iostream>
using namespace std;
int main()
{
    int array[] = {2, 33, 6, 8, 3, 4, 6, 8};
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for (int i = 0; i < 8; i++)
    {
        if (n == array[i])
        {
            cout << "found at lucation : " << i << endl;
            break;
            
        } 
    }

    return 0;
}