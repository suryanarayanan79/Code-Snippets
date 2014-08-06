#include <iostream>
#include <string>
using namespace std;
int main1()
{
cout << "bit operations";
    //cout << hex << 5;
    //cout << oct << 5;
    short count = 0;
    short number = 0xF;
    short num_bit_set = 0;
    while (count < 16) // 16 is because of short , since short occupies 16 bit. 
    {
   	 num_bit_set += (number >> count) & 1;
   	 count++;
    }
    cout << "num_bit_set\n" << num_bit_set;
    return 0;
return 1;
}
