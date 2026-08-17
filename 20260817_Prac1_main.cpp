#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260817_Prac1_header.h"

using namespace std;

//定数定義
const int PITING_MIN = 0;
const int PITING_MAX = 3;
const int PROBABILITY = 4;
const int STRIKE_COUNT = 3;
const int BALL_COUNT = 4;
const int OUT_COUNT = 3;
const int HIT_COUNT = 4;

int main(void)
{
    //変数定義
    int ply, emy;
    int prod;
    //変数初期化
    int Strike = 0;
    int Ball = 0;
    int Out = 0;
    int Hit = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));

    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;
    //条件付きのループ
    while (Out < OUT_COUNT && Hit < HIT_COUNT)
    {
        //プレイヤー選択
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート "
            << "1:カーブ "
            << "2:スライダー "
            << "3:シンカー"
            << endl;
        while (true)
        {

            cin >> ply;
            //0~3以外をはじく
            if (PITING_MIN > ply || PITING_MAX < ply)
            {
                //入力チェック
                cout << "入力に誤りがあります。"
                    << "再度入力してください。"
                    << endl;
            }
            else
            {
                break;
            }
        }


        PitingType(ply);
        //ランダムに決まる打ち方
        emy = rand() % PROBABILITY;


        prod = rand() % PROBABILITY;
        //ピッチャーとキャッチャーの結果が違う場合
        if (ply != emy)
        {
            //四分の一でストライクをボール
            if (prod == 0)
            {
                cout << "ボール！" << endl;
                Ball++;
            }
            else
            {
                cout << "ストライク！！" << endl;
                Strike++;
            }
        }

        else
        {

            Strike = 0;
            Ball = 0;
            //四分の一でHITをOUT
            if (prod == 1)
            {
                cout << "OUT!!!" << endl;
                Out++;
            }
            else
            {
                cout << "HIT!!" << endl;
                Hit++;
            }
        }
        
        if (Strike >= STRIKE_COUNT || Ball >= BALL_COUNT)
        {
            //ストライクカウント三回でOUT
            if (Strike >= STRIKE_COUNT)
            {
                Out++;
            }
            else
            {
                Hit++;
            }

            Strike = 0;
            Ball = 0;
        }
        //結果
        cout << "B:" << Ball << endl;
        cout << "S:" << Strike << endl;
        cout << "O:" << Out << endl;
        cout << "Runner:" << Hit << endl;

    }


    Result(Out);

    return 0;
}