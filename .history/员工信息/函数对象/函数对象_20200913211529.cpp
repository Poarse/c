#include<iostream>
#include<string>
using namespace std;
class MyAdd 
{
    public :
    int operator()(int v1,int v2)
    {
        return v1+v2;

    }

};
void test01()
{

    MyAdd myAdd;
    cout << myAdd(10,20) <<endl;
}
int main()
{
    test01();

    system("pause");
    return 0;
}