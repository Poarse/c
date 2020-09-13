# include<iostream>
# include<string>
# include<cstdlib>
# include<map>
# include<vector>

using namespace std;
class Worker
{
    public:
                string  m_Name;
                int  m_Salary; 


};

void creatWorker(vector<Worker>&v)
{
    string nameSeed ="ABCDEFGHIJ";
    for (int i = 0; i < 10; i++)
    {
        /* code */
        Worker worker;
        worker.m_Name = "员工";
        worker.m_Name  +=nameSeed[i];

        worker.m_Salary = rand() %10000 +10000;
    }
    


}

int main()
{
    //1.创建员工
    vector<Worker>vWorker;
    creatWorker(vWorker);
    
    system("pause");
    return 0;
}