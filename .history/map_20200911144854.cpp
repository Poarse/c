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

// void test01()
// {
//     //创建容器
//     map<int, int>m;
//     m.insert(pair<int, int>(1,10)); //对组
//     m.insert(pair<int,int>(2,50));
    
//     m.insert(pair<int,int>(3,45));

//     m.insert(pair<int,int>(4,60));

//     printMap(m);

//     //拷贝构造
//     map<int,int>m2(m);
//     printMap(m2);

//     //赋值
//     map<int,int>m3;
//     m3 = m2;
//     printMap(m3);

// }

// void test02()
// {
//     //大小
//     map<int,int>m1;
//     m1.insert(pair<int,int>(1,20));
//     m1.insert(pair<int,int>(2,20));
//     if(m1.empty())
//     {

//         cout<<"m 为空"<<endl;
//     }
//     else
//     {
//         cout<<"m不为空"<<endl;
//         cout<<"大小:"<<m1.size()<<endl;
//     }
    
//     //交换
//     map<int,int>m2;
//     m2.insert(pair<int,int>(3,240));
//     m2.insert(pair<int,int>(4,220));

//     cout<<"交换前"<<endl;
// printMap(m1);
// printMap(m2);

// cout<<"交换后"<<endl;
// m1.swap(m2);
// printMap(m1);
// printMap(m2);

// }

void test03()
{

    map<int,int>m1;
    m1.insert(pair<int,int>(1,10));
    
    //插入
    m1.insert(make_pair(2,20));

    //
    m1.insert(map<int,int>::value_type(3,30));

    m1[4]=40;

    //cout <<m1[4]<<endl;   //不建议使用
    //可以利用key访问到value
    printMap(m1);

    //删除
    m1.erase(m1.begin());
    printMap(m1);

    m1.erase(3);
    printMap(m1);

    //区间
    //m1.erase(m1.begin(), m1.end());
    m1.clear();
    printMap(m1);




}
void test04()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int, int >(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos =m.find(3);
    if(pos != m.end())
    {
        cout<<"查到：kye= "<<pos->first  <<"  value="<<(*pos).second<<endl;
    }
    else
    {
        cout<<"未找到"<<endl; 
    }
    

    //统计
    //map 不允许插入重复key 元素， count统计而言 结果要么是0 要么是1
    //mutimap 的count的统计可能大于1
    int num= m.count(3);
    cout <<"num= "<<num <<endl;




}
int main()
{
    test04();
    system("pause");
    return 0;
}