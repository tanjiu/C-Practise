#include <iostream>
using namespace std;
int main()
{
    int n=2;
    string a;
    string b(n,'c');
    cout<<"a"<<a<<endl;
    cout<<"b"<<b<<endl;
    
    //��ִ�ж�ȡ����ʱ��string������Զ����Կ�ͷ�Ŀհף��Ʊ�����ո�������з��ȡ������ӵ�һ���������ַ���ʼ����ֱ��������һ���հ��ַ�����
    //������ "  hello  world",��������"hello"
    cin>>a;
    cout<<"����  hello world��������  :"<<a<<endl;
    system("pause");
    return 0;
}