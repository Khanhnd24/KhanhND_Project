
#include <iostream>
  
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{

    int num;
    cout << "Nhap so: ";
    cin >> num; 
    cout << "Giai thua cua "<< num <<"  la "<< factorial(num) << endl;
    return 0;
}
