#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //変数宣言
    int player;
    int cpu;
    int result;
    int i;
    int win = 0;
    int lose = 0;
    int draw = 0;

    srand((unsigned int)time(nullptr));//CPUの手の乱数設定

    cout << "じゃんけんゲームを開始します。" << endl;

    for (i = 0; i < 5; i++)//５回戦起こす
    {
        cout << endl;
        cout << "-------- " << i + 1 << "回戦 --------" << endl;//何戦目かの表示

        while (true)
        {
            cout << "0：グー　1：チョキ　2：パー" << endl;
            cout << "プレイヤーの手を入力してください：" << endl;

            cin >> player;//プレイヤーの手の選択

            if (player >= 0 && player <= 2)//入力が正しいかの確認
            {
                break;
            }

            cout << "入力に誤りがあります。再入力してください。" << endl;
        }

        cpu = rand() % 3;//CPUの手がランダムになる

        switch (player)//それぞれ選択した場合の分岐先
        {
        case 0:
            cout << "PLAYER：グー" << endl;
            break;

        case 1:
            cout << "PLAYER：チョキ" << endl;
            break;

        case 2:
            cout << "PLAYER：パー" << endl;
            break;
        }


        switch (cpu)
        {
        case 0:
            cout << "CPU：グー" << endl;
            break;

        case 1:
            cout << "CPU：チョキ" << endl;
            break;

        case 2:
            cout << "CPU：パー" << endl;
            break;
        }


        result = player - cpu;//グーチョキパーの計算

        if (result == -1 || result == 2)//じゃんけんの結果の表示
        {
            cout << "PLAYER WIN!" << endl;
            win++;
        }
        else if (result == 0)//互いに０（あいこ）の場合
        {
            cout << "DRAW" << endl;
            draw++;
        }
        else
        {
            cout << "CPU WIN!" << endl;//その他、負け
            lose++;
        }
    }


    cout << endl;
    cout << "==============================" << endl;//勝敗の結果
    cout << "5回勝負終了！" << endl;
    cout << win << "勝 "
        << draw << "分 "
        << lose << "敗" << endl;
    cout << "==============================" << endl;

    return 0;
}