
#include <iostream>
#include <cstring>  // For std::strcpy_s and std::strlen

using namespace std;

template<typename T1 , typename T2>
void copy(T1 a1[], T2 a2[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        a1[i] = a2[i];
    }
}


int main() {
    int a[100];
    double b[100];
    copy(a, b, 100);

    return 0;
}