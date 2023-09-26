#include <iostream>
using namespace std;
//将浮点数转换为整数类型，要求四舍五入


int main() {
    int a, b;
    while (cin >> a >> b) { // 注意 while 处理多个 case
        cout << a + b << endl;
    }
}
// 64 位输出请用 printf("%lld")