#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//查找算法
//find

//查找 内置数据类型
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
int main()
{

      test01();
      system("pause");
      return 0;

}