#include <iostream>

int main()
{
using namespace std;
int i = 10;                  // 外层 i，作用域是整个 main 块

for (int i = 0; i < 5; i++)  // 这里又声明了一个新的 i，内层 i
{
    cout << "C++ knows loops.\n";
}                            // 内层 i 到这里就销毁了

cout << i << endl;           // 这里看到的是外层 i，所以输出 10

return 0;
}
//不是同一个 i 的存储空间不一样，而是根本有两个 i：外层一个，for 里又声明了一个。内层 i 遮蔽外层 i，循环结束后内层销毁，外层还在，所以最后输出 10。

