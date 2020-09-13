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
    
}

int main()
{

    test02();
    system("pause");
    return 0;
}