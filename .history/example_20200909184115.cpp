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


}

int main()
{
    test();
    system("pause");
    return 0;

}