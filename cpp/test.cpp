#include<iostream>
#include<string>
#include<bitset>
#include<cmath>
using namespace std;
int main()
{
     bitset<8> result(pow(2,7));
    cout<<(result>>4)<<endl;
    return 0;
}