#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//便利算法
void print01(int val)
{
      cout <<val << " "<< endl;
}
void test01()
{

      vector<int>v;
      for (int i = 0; i < 10; i++)
      {
            /* code */
            v.push_back(i);
            
     }

      for_each(v.begin(), b.end(),print01);
}

int main()
{
      system("pause");
      return 0;
}