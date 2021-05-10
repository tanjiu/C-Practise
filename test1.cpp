#include <iostream>
using namespace std;
int main()
{
    cout<<"开始运行了"<<endl;
    int a = 2, b = 3, c = 4;
    int *p = &a, *q = &b;
    cout << "初始化时*p的值-----" << *p << endl;
    //改变*p指针的值
    *p = b;
    cout << "改变*p指针的值---" << *p << endl;
    cout << "改变*p指针的值后a的值---" << a << endl;
    //改变*p指针指向的对象
    p = &c;
    cout << "改变*p指针指向的对象---" << *p << endl;
    system("pause");
    return 0;
}