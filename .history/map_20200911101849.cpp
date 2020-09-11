#include<iostream>
#include<string>
#include<cstdlib>
#include<map>
using namespace std;
//map 容器
void printMap(map<int, int>&m)
{ 
    for(map<int,int>::iterator it =m.begin(); it !=m.end(); it++)
    {

        cout <<"key值："<<(*it).first <<" 值："<<it->second <<endl;
    }
    cout <<endl;

}

void test01()
{
    //创建容器
    map<int, int>m;
    m.insert(pair<int, int>(1,10)); //对组
    m.insert(pair<int,int>(2,50));
    
    m.insert(pair<int,int>(3,45));

    m.insert(pair<int,int>(4,60));

    printMap(m);
}

int main()
{
    test01();
    system("pause");

    return 0;
}