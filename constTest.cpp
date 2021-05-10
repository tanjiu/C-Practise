#include <iostream>
using namespace std;
int main()
{

    int i = 0;
    //这是一个顶层指针
    int *const p1 = &i;
    cout << " int *const p1=&i;的值为" << *p1 << endl;
    i = 5;
    //此时*p1的值为5
    cout << " i=5后*p1的值为" << *p1 << endl;


    //读从左往右读，常量 指针 Pb
    //常量指针 const *pb,表示*pb的值不能更改，可以更改Pb的所指向的地址，但地址里面的值不能变
    int num_a = 1;
     //读从左往右读，常量 指针 P_a
    int const *p_a = &num_a; //底层const
    //*p_a = 2;  //错误，指向“常量”的指针不能改变所指的对象
    int b = 1;
    p_a = &b;
    cout << " int b=1; p_a=&b;的值为" << *p_a << endl;
    //错误，不能直接赋值，可以更改p_a所指向的地址
    //*p_a = 1;
    //总结：常量指针不允许对指针所指向的值也就是*p_a直接进行更改，但可以改变指针的值即改变P_a的值，p_a=&b,但*p_a的值不能变

    //指针常量 
    int num_b = 2;
    //指针常量 读从左往右读 指针 常量 p_b
    int *const p_b = &num_b; //顶层const
    //p_b = &num_a;  //错误，指针常量不能改变存储的地址值，但可以通过改变num_b的值来间接改变*p_b的值
    num_b=10;
    cout << " num_b=10;*p_b的值为" << *p_b << endl;
    //总结：指针常量不可以改变指针所指向的地址即指针的值，但是可以通过改变地址里面的值来改变指针所指向的值

    system("pause");
   

    return 0;
}