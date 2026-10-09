#include <iostream>
const int ArSize = 8;
int sum_arr(int *arr,int n);

int main()
{
    using namespace std;
    int cookies[ArSize]={1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies,ArSize);
    cout << "total cookies eaten: "<< sum <<"\n";

    
    return 0;
}

int sum_arr(int *arr,int n)
//int sum_arr(int arr[],int n)
{
    int total=0;
    for(int i = 0;i < n;i++)
        total=total+arr[i];
    return total;

}
/*后面函数定义形式参数是个指针 存放上面数组首元素地址  也就是int *arr=cookies 但是total问什么能 total=total+arr[i] arr不是数组啊 
是放数组的指针 为什么可以呢？  因为在 C++ 中，下标运算符 [] 并不是数组的专属特权，它是指针的专属语法！编译器在遇到 arr[i] 时，
会自动把它翻译成：*(arr + i)
int cookies[8] = {1,2,4,8,16,32,64,128};
int *p = cookies; // p 指向首元素

// 下面这几种写法完全等价：
cout << cookies[2]; // 数组名用下标
cout << p[2];       // 指针用下标
cout << *(p + 2);   // 指针解引用
cout << *(cookies + 2); // 数组名解引用
*/