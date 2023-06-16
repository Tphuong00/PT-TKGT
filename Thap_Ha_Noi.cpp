#include <iostream>
using namespace std;

void TowerOfHanoi(int n, char cot1, char cot2, char cot3) {
    if (n == 1) {
        cout << "chuyen 1 tu " << cot1 << " -> " << cot2 << endl;
        return;
    }
    TowerOfHanoi(n - 1, cot1, cot3, cot2);
    cout << "chuyen " << n << " tu " << cot1 << " -> " << cot2 << endl;
    TowerOfHanoi(n - 1, cot3, cot2, cot1);
}

int main() {
    int n;
    cout << "Nhap so dia ma ban muon giai: ";
    cin >> n;
    cout << " Thu tu thuc hien: " <<endl;
    TowerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}