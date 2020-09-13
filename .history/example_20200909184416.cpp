#include<iostream>
#include<string>
#include<cstdlib>
#include<list>
using namespace std;
//list 容器 排序案例 对于自定义数据类型 做排序
// 按照年龄进行升序，如果年龄相同按照身高进行排序

class  Person
{
    Person(string name, int age , int height)
    {
        this->m_Name= name;
        this->m_Age=age;
        this->m_Height = height;

    }
    public:
    string m_Name;
    int m_Age;
    int m_Height;

};
void test()
{
    list<Person>L;
    //准备数据
    Person p1("刘备", 35, 175);
    Person p1("曹操", 45, 180);
    Person p1("孙权", 40, 170);
    Person p1("赵云", 35, 165);
    Person p1("关羽", 35, 200);



}

int main()
{
    test();
    system("pause");
    return 0;

}