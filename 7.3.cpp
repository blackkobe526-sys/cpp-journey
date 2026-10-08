#include <iostream>
void n_chars(char c, int n);

int main()
{
    using namespace std;
    int times=0;
    char ch;
    cout << "Enter a character ";
    cin >> ch;
    while (ch!='q')
    {
        cout << "Enter a integer: ";
        cin >> times;
        n_chars(ch,times);
        cout << "\nEnter another character or press the q-key to quit: ";
        cin >> ch;
    }
    cout << "times is main() is "<< times <<".\n";
    cout << "Bye\n";
    return 0;
}

void n_chars(char c, int n)
{
    while(n-->0)
        std::cout << c;

}