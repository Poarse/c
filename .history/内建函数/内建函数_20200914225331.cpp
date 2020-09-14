#include<iostream>
#include<string>
# include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//算数仿函数

//negate 一元仿函数 取反仿函数
void test01()
{

      negate<int>n;
      n(50);
      cout<<n(20)<<endl;
}
//plus 二元仿函数 加法
void test02()
{
      plus<int >p;
      cout<<  p(20,10) <<endl;
}

//关系仿函数
//大于greater

void test03()
{
      vector<int>v;
      v.push_back(2);
      v.push_back(15);
      v.push_back(85);
      v.push_back(13);
      v.push_back(10);
      //sort(v.begin(),v.end());

      for(vector<int>::iterator it=v.begin(); it !=v.end(); it++)
      {

            cout<<*it<<endl;

      }
      cout<<endl;





}

 int main()
 {
       test03();
       system("pause");
       return 0;
 }