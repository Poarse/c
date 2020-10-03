#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//查找算法
//find
//find_if
//查找 内置数据类型
class Person
{
public:
      Person(string name, int age)
      {
            this->m_name =name;
            this->m_age = age;

      }
      //重载 == 
      bool operator==(const Person & p)
      {

            if (this->m_name == p.m_name &&this->m_age ==p.m_age)
            {
                  return true;
            }
            else
            {
                  return false;
            }
            
      }
      string m_name;
      int m_age;
};
class Greater20
{
public:
            bool operator()(Person & p)
            {

                  return p.m_age>20;
            }

};
class GreaterFive
{
public:
            bool operator()(int va)
            {
                  return va >5;
            }
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
      
      //
      Person pp("bbb",90);
      vector<Person> :: iterator  it = find(v.begin(), v.end(), p2);
      //
      if (it == v.end())
      {
            /* code */
            cout<<"没有找到"<<endl;

      }
      else
      {
            cout<<"找到了: "<<"姓名:"<<it->m_name <<" 年龄:"<<it ->m_age <<endl;
            
      }
      
}

 void test03()
 {

       vector<int>v;
       for (int i = 0; i <10; i++)
       {
             /* code */
             v.push_back(i);
       }
       
     vector<int>::iterator it =  find_if(v.begin(),v.end(),GreaterFive());
     if(it == v.end())
     {
           cout<<"没有找到"<<endl;

     }
     else
     {
           
           cout<<"找到"<<(*it)<<endl ;
     }
     
 }


void test04()
{
      vector<Person>v;
      
      Person p1("aaa",10);
      Person p2("ccc",20);
      Person p3("ddd",15);
      Person p4(" 张三",30);

      v.push_back(p1);
      v.push_back(p2);
      v.push_back(p3);
      v.push_back(p4);

      vector<Person>::iterator  it = find_if(v.begin(), v.end(),  Greater20());

      if (it == v.end())
      {
            /* code */
            cout<<"没有找到"<<endl;
      }
      else
      {
            
            cout<<"找到：" <<"姓名-"<<it->m_name <<"年龄-"<<it->m_age <<endl;
      }
      


}
//查找相邻重复的元素
//adjacent_find
void test05()
{

      vector<int>v;
      v.push_back(0);
      v.push_back(0);
      v.push_back(1);
      v.push_back(0);
      v.push_back(0);
      v.push_back(2);
      v.push_back(4);

      vector<int> :: iterator it = adjacent_find(v.begin(),v.end());

      if(it == v.end())
      {
            cout<<"没有找到"<<endl;
      }
      else
      {
            
            cout<<" 找到相邻元素"<<*it<<endl;
      }
      
}


//查找指定元素是否存在
//binary_search
//注意在无序的序列中不可用
void test06()
{

      vector<int>v;
      for (int  i = 0; i < 10; i++)
      {
            /* code */
            v.push_back(i);

      }
      //查找容器中是否有元素9
       bool ret = binary_search(v.begin(),v.end(),9);

      if(ret)
      {
            cout <<"找到元素"<<endl;

      }
      else
      {
            /* code */
             cout <<"没找到元素"<<endl;
      }
      
}

// 统计元素个数
//count 

//1. 统计内置数据类型
void test07()
{
      vector<int>v;
      v.push_back(10); 
      v.push_back(30); 
      v.push_back(40); 
      v.push_back(50); 
      v.push_back(20); 
      v.push_back(60); 
      v.push_back(80); 
      v.push_back(90); 

      int num =count(v.begin(),v.end(),40);
      cout<<"40 的个数为："<<num <<endl;
}

int main()
{

      test06( );
      system("pause");
      return 0;

}