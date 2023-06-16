#include <iostream>
using namespace std;


double horner(double hs[], int n, double x)
{
    double kq = hs[0];
    for (int i = 1; i < n; i++) {
        kq = kq * x + hs[i];
    }
    return kq;
}

int main()
{
    // Đa thức 4x^3 + 3x^2 + 2x + 1
    double hs[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> hs[i];
    }
    double x;
    cin >> x;

    double kq = horner(hs, n, x);
    cout << "Gia tri cua da thuc tai x = " << x << " la " << kq << endl;

    return 0;
}