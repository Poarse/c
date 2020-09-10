#include<iostream>
using namespace std ;
#include<list>
#include<cstdlib>
#include<set>

//set 容器

void printSet(const set<int>&s)
{
    for(set<int>:: iterator it = s.begin(); it !=s.end();it++)
    {

        cout<<*it<<" ";

    }
    cout <<endl;

}

void test01()
{
    set<int>st1;
    //插入数据，　只有insert方式
    st1.insert(10);
    st1.insert(20);
    st1.insert(30);
    st1.insert(40);
    st1.insert(50);

    //遍历
    printSet(st1);




}

int main()
{

    test01();
    system("pause");
    return 0;
}