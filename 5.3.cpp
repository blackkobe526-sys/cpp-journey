#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    cout << "交换前: a = " << a << ", b = " << b << endl;

    // 连续三次异或
    a = a ^ b;  // a 变成了 5 ^ 3
    b = a ^ b;  // b = (5 ^ 3) ^ 3 = 5（原来的 a）
    a = a ^ b;  // a = (5 ^ 3) ^ 5 = 3（原来的 b）

    cout << "交换后: a = " << a << ", b = " << b << endl;
    return 0;
}