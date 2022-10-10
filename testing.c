#include<iostream>
using namespace std;

#define ONEFEN    1
#define FIVEFEN    5
#define TENFEN    10
#define TWENTYFINEFEN 25

int main()
{
    int sum_money=41;
    int num_25=0,num_10=0,num_5=0,num_1=0;

    /*不断尝试每一种硬币*/
    while(money>=TWENTYFINEFEN) { num_25++; sum_money -=TWENTYFINEFEN; }
    while(money>=TENFEN) { num_10++; sum_money -=TENFEN; }
    while(money>=FIVEFEN)  { num_5++;  sum_money -=FIVEFEN; }
    while(money>=ONEFEN)  { num_1++;  sum_money -=ONEFEN; }

    //The output
    cout<< "25分硬币数："<<num_25<<endl;
    cout<< "10分硬币数："<<num_10<<endl;
    cout<< "5分硬币数："<<num_5<<endl;
    cout<< "1分硬币数："<<num_1<<endl;

    return 0;
}
