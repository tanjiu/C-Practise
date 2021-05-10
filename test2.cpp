#include <iostream>
using namespace std;
int main()
{
    cout<<"开始运行了"<<endl;
    int a = 2, b = 3, c = 4;
    int *p = &a, *q = &b;
    cout << "初始化时*p的值-----" << *p << endl;
    //改变*p指针所指对象的值
    //下面这一句，把a的值改成了3
    *p = b;
    cout << "改变*p指针所值对象的值---" << *p << endl;
    cout << "改变*p指针所指向对象的值后a的值---" << a << endl;
    //改变*p指针的值，下面这一句将*p指向a，改为了指向c
    p = &c;
    cout << "改变*p指针的值---" << *p << endl;
    system("pause");
    return 0;
}