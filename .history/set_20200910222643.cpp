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


        set<int>st2;
    //插入数据，　只有insert方式
    st2.insert(10);
    st2.insert(20);
    st2.insert(30);
    st2.insert(40);
    st2.insert(50);

    //遍历

    // //set容器特点，所有元素插入时候自动被排序
    // //set 容器不允许插入重复值
    // printSet(st1);
    


    // //拷贝构造
    // set<int>st2(st1);

    // printSet(st2);

    // //赋值
    // set<int>st3;
    // st3 = st2;
    // printSet(st3);

    //判断是否为空
    if (st1.empty())
    {
        cout<<"st1为空"<<endl;

    }
    else
    {
        cout<<"st1不为空"<<endl;
        cout<<"st1大小"<<st1.size()<<endl;
    }
    

//

}

void test02(){

    set<int>st1;
    //插入数据，　只有insert方式
    st1.insert(10);
    st1.insert(20);
    st1.insert(30);
    st1.insert(40);
    st1.insert(50);


        set<int>st2;
    //插入数据，　只有insert方式
    st2.insert(100);
    st2.insert(200);
    st2.insert(300);
    st2.insert(400);
    st2.insert(500);


    cout<<"交换前"<<endl ;
    printSet(st1);
    printSet(st2);

    cout<<"交换后"<<endl ;
    st1.swap(st2);
    printSet(st1);
    printSet(st2);

}

//插入和删除

void test03()
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

    //删除
    st1.erase(st1.begin());
    printSet(st1);

    st1.erase(30);
    printSet(st1);

    //清空
    st1.erase(st1.begin(), st1.end());
    printSet(st1);

}
//查找和统计
void test04()
{

    //查找
    set<int>s1;
    
    //插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos=s1.find(30);
    if (pos !=s1.end())

    {
        cout<<"找到元素"<<endl;

    }
    else
    {
        cout<<"未找到元素"<<endl;
    }
    
    

}

void test05()
{
     //查找
    set<int>s1;
    
    //插入数据
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    //统计30 的个数
    int num = s1.count(30);
    cout<<"num=  "<<num <<endl;

}

//
void test06()
{

    set<int>s1;
    s1.insert(10);

    pair<set<int>::iterator, bool> ret = s1.insert(20);
    if (ret.second)
    {
        /* code */
        cout<<"第一次插入成功"<<endl;

    }
    else
    {
        cout<<"第一次插入不成功"<<endl;
    }
    
    ret = s1.insert(20);
     if (ret.second)
    {
        /* code */
        cout<<"第二次插入成功"<<endl;

    }
    else
    {
        cout<<"第二次插入不成功"<<endl;
    }
    

    //multiset

    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);

    //遍历
    for (multiset<int>::iterator it=ms.begin();it!=ms.end();it++)
    {
        cout<<*it <<" ";

    }
    cout<<endl;
    

}



//pair 对组的使用
void test07()
{
    //第一种的创建方式
    pair<string,int>p("Tom",20);

    cout <<"姓名："<<p.first <<" 年龄："<<p.second<<endl;


    pair<string,int>p2("Jerry",30);

    cout <<"姓名："<<p2.first <<" 年龄："<<p2.second<<endl;


}



int main()
{

    test07();
    system("pause");
    return 0;
}

