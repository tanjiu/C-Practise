#include <iostream>
using namespace std;
int main()
{
    cout<<"��ʼ������"<<endl;
    int a = 2, b = 3, c = 4;
    int *p = &a, *q = &b;
    cout << "��ʼ��ʱ*p��ֵ-----" << *p << endl;
    //�ı�*pָ����ָ�����ֵ
    //������һ�䣬��a��ֵ�ĳ���3
    *p = b;
    cout << "�ı�*pָ����ֵ�����ֵ---" << *p << endl;
    cout << "�ı�*pָ����ָ������ֵ��a��ֵ---" << a << endl;
    //�ı�*pָ���ֵ��������һ�佫*pָ��a����Ϊ��ָ��c
    p = &c;
    cout << "�ı�*pָ���ֵ---" << *p << endl;
    system("pause");
    return 0;
}