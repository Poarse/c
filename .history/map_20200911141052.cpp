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

    //拷贝构造
    map<int,int>m2(m);
    printMap(m2);

    //赋值
    map<int,int>m3;
    m3 = m2;
    printMap(m3);

}

void test02()
{
    //大小
    map<int,int>m1;
    m1.insert(pair<int,int>(1,20));
    m1.insert(pair<int,int>(2,20));
    if(m1.empty())
    {

        cout<<"m 为空"<<endl;
    }
    else
    {
        cout<<"m不为空"<<endl;
        cout<<"大小:"<<m1.size()<<endl;
    }
    
    //交换
    map<int,int>m2;
    m2.insert(pair<int,int>(3,240));
    m2.insert(pair<int,int>(4,220));

    cout<<"交换前"<<endl;
printMap(m1);
printMap(m2);

cout<<"交换后"<<endl;
m1.swap(m2);
printMap(m1);
printMap(m2);


void test03()
{

    map<int,int>m1;
    m1.insert(pair<int,int>(1,10));
    
    //插入
    m1.in


}

}
int main()
{
    test02();
    system("pause");

    return 0;
}