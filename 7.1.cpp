#include <iostream>
void simple(void);
int main()
{
    using namespace std;
    cout << "main() will call the simple() fuction:\n ";
    simple();

    return 0;
}

void simple(void)
{
    using namespace std;
    cout<<"lyric\n";
}