// #include<iostream>
// #include<string>
// using namespace std;
// class MyAdd 
// {
//     public :
//     int operator()(int v1,int v2)
//     {
//         return v1+v2;

//     }

// };
// void test01()
// {

//     MyAdd myAdd;
//     cout << myAdd(10,20) <<endl;
// }

// //函数对象超出普通函数的概念,函数对象可以拥有自己的状态
// class Myprint{
//     public:
//     Myprint()
//     {
//         this->count = 0;
//     }
//     void operator()(string test)
//     {
//         cout << test <<endl;
//         this->count ++;
//     }
//     int count ;
// };
// void test02()
// {
//     Myprint myprint;
//     myprint("hello,world");
//     myprint("hello,world");
//     myprint("hello,world");
//     myprint("hello,world");

//     cout <<"调用的次数为: "<<myprint.count <<endl; 
// }
// //函数对象可以作为阐述传递
// void doPrint(Myprint & mp, string test)
// {
//     mp(test);

// }

// void test03()
// {

//     Myprint myPint;
//     doPrint(myPint,"Hello c++");
// }



// int main()
// {
//     test03();

//     system("pause");
//     return 0;
// }