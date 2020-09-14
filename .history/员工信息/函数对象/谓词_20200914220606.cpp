# include<iostream>
#include<vector>
# include<string>
# include<algorithm>
using namespace std;

//仿函数,返回值类型是bool数据类型, 称之为谓词
//一元谓词
class GreateFive
{
public:
            bool operator()(int val)
            {
                  return val>5;
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

      //查找容器中,有没有大于5的数字
      //GreateFive() 匿名函数对象
      vector<int>::iterator it =find_if(v.begin(),v.end(), GreateFive());
      if (it ==v.end())
      {
            cout<<"没有找到"<<endl;
      }
      else
      {
            /* code */
            cout<<"找到:为" << *it <<endl;
      
      

}

void test02()
{
      vector<int>v;
      v.push_back(10);
      v.push_back(50);
      v.push_back(20);
      v.push_back(80);
      v.push_back(70);
       v.push_back(150);


}
int main()
{
      test02();
      system("pause");
      return 0;
}