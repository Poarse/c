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

//函数对象超出普通函数的概念,函数对象可以拥有自己的状态
class Myprint{
    public:
    void opertor()(string test)
    {
        cout << test <<endl;
        
    }
};
void test02()
{
    Myprint myprint;
    myprint("hello,world");


}
int main()
{
    test02();

    system("pause");
    return 0;
}