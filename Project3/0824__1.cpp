#include <iostream>
using namespace std;

int main(void)
{
    //変数
    int a = 0;
    //aのアドレスの取得
    int* p = &a;
    //aのアドレスをpに設定
    cout << "aの初期値: " << a << endl;
    
    *p = 10;

    cout << "aの変更後の値: " << a << endl;

    return 0;
}