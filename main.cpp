#include <iostream>
//[C_MM26-��] ��X 1*1�B2*2�B...�BN*N�����G
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << i << "*" << i << "=" << i*i << endl;
    }
    return 0;
}
