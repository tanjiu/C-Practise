#include<iostream>
using namespace std;
int main(){

    int a=2;
    int *p=&a;
    int **pp=&p;
    cout<<"*p��ֵ----"<<*p<<endl;
     cout<<"*pp��ֵ------"<<*pp<<endl;
    cout<<"**pp��ֵ------"<<**pp<<endl;
   system("pause");
    return 0;
}