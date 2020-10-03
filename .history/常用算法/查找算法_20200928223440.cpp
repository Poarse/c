#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//查找算法
//find

//查找 内置数据类型
class Person
{
public:
      Person(string name, int age)
      {
            this->m_name =name;
            this->m_age = age;

      }
      string m_name;
      int m_age;
};

void test01()
{

      vector<int>v;
      for (int i = 0; i < 10; i++)
      {
            /* code */
            v.push_back(i);
      }
      
      //查找是否5
       vector<int> ::iterator  it = find(v.begin(),v.end(),5);
       if(it ==v.end())
       {
             cout<<"没有找到"<<endl;

       }
       else
       {
             /* code */
             cout<<"找到"<<*it<<endl;
       }
       
}
void test02()
{
      vector<Person>v;
      Person p1("aaa",10);
      Person p2("bbb",90);
      Person p3("rrr",40);
      Person p4("hhh",80);

      v.push_back(p1);
      v.push_back(p2);
      v.push_back(p3);
      v.push_back(p4);
      
      vector<Person> :: iterator  it = find(v.begin(), v.end(), p2);
      //
      if (it == v.end())
      {
            /* code */
            cout<<"没有找到"<<endl;

      }
      else
      {
            cout<<"找到了"<<"姓名:"<<it->m_name <<"年龄:"<<it ->m_age <<endl;
            
      }
      
}

int main()
{

      test02();
      system("pause");
      return 0;

}