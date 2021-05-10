#include <iostream>
using namespace std;
int main()
{
    int n=2;
    string a;
    string b(n,'c');
    cout<<"a"<<a<<endl;
    cout<<"b"<<b<<endl;
    
    //在执行读取操作时，string对象会自动忽略开头的空白（制表符、空格符、换行符等—）并从第一个真正的字符开始读起，直到遇到下一个空白字符结束
    //如输入 "  hello  world",输出结果是"hello"
    cin>>a;
    cout<<"输入  hello world的输出结果  :"<<a<<endl;
    system("pause");
    return 0;
}