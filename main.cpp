#include <iostream>
//[C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
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
