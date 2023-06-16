#include <iostream>
using namespace std;


void Phanchia(float a[], int L, int R) {
    int i, j, x;
    x = a[(L + R) / 2];
    i = L, j = R;
    do {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);
    if (L < j) Phanchia(a, L, j);
    if (i < R) Phanchia(a, i, R);
}

void QuickSort(float a[], int n) {
    Phanchia(a, 0, n - 1);
}

int main() {
    float a[100];
    int n;
    cin >> n;
    cout << " Cac phan tu: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    QuickSort(a, n);
    cout << "Cac phan tu sau khi sap xep QuickSort la: ";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    return 0;
}
