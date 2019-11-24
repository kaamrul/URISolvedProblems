#include<iostream>
using namespace std;
int main()
{
    for(float I = 0; I <= 2.2; I += 0.2)
    {
        for(float J = 1; J <= 3.0; J++)
            cout << "I=" << I << " " << "J=" << I+J << endl;
    }
    return 0;
}
