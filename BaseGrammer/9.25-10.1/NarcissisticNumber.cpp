//////////////////////////////////
/// Description: 水仙花数
/// Name : liaofeng
/// Date : 2024.9.26
/////////////////////////////////
#include <iostream>

void SolveProblem()
{
    for(int i = 1;i<100000;++i)
    {
        int num = 0;
        int t = i;
        while(t)
        {
            int endNumber = t % 10;
            num += endNumber * endNumber * endNumber;
            t /= 10;
        }
        if(num == i)
        {
            std::cout<<num<<" ";
        }
    }
}

int main()
{
    SolveProblem();
    return 0;
}