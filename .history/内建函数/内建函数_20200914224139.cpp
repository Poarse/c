#include<iostream>
#include<string>
# include<functional>
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


 int main()
 {
       test01();
       system("pause");
       return 0;
 }