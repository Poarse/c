#include<iostream>
using namespace std ;
#include<list>
#include<cstdlib>
//list 容器

void printList(const list<int>&L)
{
	for (list<int>::const_iterator it=L.begin(); it !=L.end();it++)
	{
		cout<<*it <<" ";

	}
	cout<<endl;

}
void test()
{
	//创建list容器
	list<int>L1;

	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	// 遍历list容器
	printList(L1);

	//判断容器是否为空
	if (L1.empty())
	{
	
		cout<<"L1为空"<<endl;
	}
	
	else
	{
	
		cout<<"L1不为空"<<endl;

		//list元素个数
		cout<<"元素的个数："<<L1.size()<<endl;

	}
	
	//重新制定大小
	L1.resize(10,500);
	printList(L1);

	L1.resize(3);
	printList(L1);


	//区间方式构造
	list<int>L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int>L3(L2);
	printList(L3);
	

	//n个elelm
	list<int>L4(10,1000);
	printList(L4);

	//赋值 operatot =赋值

	list<int>L5(L2);
	printList(L5);

	list<int>L6;
	L6.assign(L2.begin(), L2.end());
	printList(L6);

	list<int>L7;
	L7.assign(10,800);
	printList(L7);



}
void test02()
{
	list<int>L1;
		//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	list<int>L2;
	L2.assign(10,20);

	cout<<"交换前"<<endl;
	printList(L1);
	printList(L2);


	L1.swap(L2);
	cout<<"交换后"<<endl;
	printList(L1);
	printList(L2);

}

bool  myCompare(int v1, int v2)
{
	//降序 就是让第一个数大于第二个数
	return v1 > v2;

}
//插入和删除
void test03(){
	list<int>L1;
	//尾插
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);

	//头插

	L1.push_front(100);
	L1.push_front(200);
	L1.push_front(300);
	printList(L1);
	//删除
	L1.pop_back();
	printList(L1);

	L1.pop_front();

	printList(L1);

	//insert
	L1.insert(L1.begin(),1000);
	printList(L1);
	list<int>::iterator it =L1.begin();
	L1.insert(++it,800);
	printList(L1);

	//删除

	it = L1.begin();
	L1.erase(++it);
	printList(L1);
	

	//移除
	L1.push_back(10000);
	printList(L1);
	L1.remove(10000);
	printList(L1);


	//清空
	// L1.clear();
	// printList(L1);

	//L1[0] 不可以用[]访问list容器中的元素  同时不可以使用at方式访问list容器的元素 
	//原因是list本质链表，不是用连续性空间存储数据，迭代器也是不支持随机访问的

	cout<<"第一个元素为： "<<L1.front()<<endl;
	cout<<"最后一个元素为： "<<L1.back()<<endl;
	
	//验证迭代器是不支持随机访问的
	//it = it+1 会出现错误
	//it++ 支持双向
	//it-- 


	//翻转
	printList(L1);
	L1.reverse();
	printList(L1);
	//排序
	//所有的不支持随机访问迭代器的容器，不可以用标准算法
	//sort(L1.begin(),L1.end())
	//不支持随机访问的迭代器的容器，内部会提供对应一些算法
	L1.sort();
	printList(L1);
	//降序
	L1.sort(myCompare);
	printList(L1);
}
int main(){


	test03();
	system("pause");
	return 0;
}
