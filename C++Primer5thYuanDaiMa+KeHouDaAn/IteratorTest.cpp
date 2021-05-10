#include <iostream>
#include <vector>
using namespace std;
int main()
{

    string s(" hello world ");
    for (auto &i : s)
        i = toupper(i);
    cout << " touppper:" << s << endl;
    for (decltype(s.size()) index = 0; index < s.size(); ++index)
        s[index] = tolower(s[index]);
    cout << " tolower:" << s << endl;
    //µü´úÆ÷ÐÎÊ½
    for (auto it = s.begin(); it != s.end(); ++it)
        *it = toupper(*it);
    cout << " iterator touppper:" << s << endl;

    vector<int> v;
    for(int i=1;i<=10;i++)
        v.push_back(i);
    for (auto a = v.begin();a!=v.end();++a)
        *a*=2;
    for(auto b:v)
        cout<<b<<endl;
        system("pause");
    return 0;
}