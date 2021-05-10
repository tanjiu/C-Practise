#include<iostream>
using namespace std;
int main(){

    int a=2;
    int *p=&a;
    int **pp=&p;
    cout<<"*p的值----"<<*p<<endl;
     cout<<"*pp的值------"<<*pp<<endl;
    cout<<"**pp的值------"<<**pp<<endl;
   system("pause");
    return 0;
}