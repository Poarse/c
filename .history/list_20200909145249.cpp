#include<iostream>
using namespace std ;
#include<list>
//list 容器

void printList(const list<int>&L)
{
	for (list<int>::const_iterator it=L.begin(); it !=L.end();it++)
	{
		cout<<*it <<" ";
		
	}

}
void test()
{
	//创建list容器
	list<int>L1;

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30):
	L1.push_back(40);

	// 遍历list容器
	printList(L1);
}

int main(){


	system("pause");
	return 0;
}
