#include <conio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>
#include <windows.h>
using namespace std;
//定義方向鍵
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
//紀錄地圖,0是空白,1是牆,2是身體,3是蘋果
int map[361]={0};  //一開始361格都設為0
int sdir;  //紀錄行進方向
int shead,stail;  //紀錄首，尾座標
vector<int> snk;  //紀錄各節身體座標
int apple;  //紀錄蘋果座標
//第一題，地圖繪製，0用白色方塊顯示，其餘用黑色方塊
void draw_map() {
    system("cls");
    for(int i = 0; i < 361; i++) {
        if(map[i] == 0) {
            cout << "□";
        }
        else {
            cout << "■";
        }
        if(i%19 == 18) {
            cout << "\n";
        }
    }
}
//第二題，設定邊界與加入蛇，設定一開始位置 175 176 177，蛇的代號是2
void init_map() {
    for(int i = 0; i < 19; i++) map[i] = 1;
    for(int i = 343; i < 362; i++) map[i] = 1;
    for(int i = 0; i < 362; i++) {
        if(i%19 == 0 || i%19 == 18) map[i] = 1;
    }
    for(int i = 175; i < 178; i++) {
        map[i] = 2;
        snk.push_back(i);
    }
    shead = 177;
    sdir = 1;
}
//第三題，加入蘋果 ，蘋果的代碼是3
void new_apple() {
    int x;
    while(1) {
        x = rand() % 361;
        if(map[x]==0) break;
    }
    apple = x;
    map[x] = 3;
}

int main(void) {
    srand( (int)time(NULL));//重置亂數表
    int k;  //紀錄你按到哪一個按鍵
	init_map();
    new_apple();
 	draw_map();

    do {
//		有按鍵，則改變方向
        k = _getch();  //_getch means get a char 鍵盤按鍵，a b c d...也就是一個字元 ，但是方向鍵比較特殊，會送出兩個字元，其中第一個是特殊字元224
        if (k == 224) {           // 比較第一個字元，若是224，表示是方向鍵
            k = _getch();       // 讀取第二個字元，藉由判斷是哪個方向鍵，方向鍵我已經幫你定義在最上面 ，所以你可以直接用

            if(k == KEY_UP) sdir = -19;
            else if(k == KEY_DOWN) sdir = 19;
            else if(k == KEY_LEFT) sdir = -1;
            else sdir = 1;

            shead += sdir;

            if(map[shead] == 1) {
                cout << "hit wall, game over";
                return 1;
            }
            vector<int>::iterator it = find(snk.begin(), snk.end(), shead);
            if(it != snk.end()) {
                cout << "bite self, game over";
                return 1;
            }

            if(map[shead] == 3) new_apple();
            else {
                stail = snk.front();
                snk.erase(snk.begin());
                map[stail] = 0;
            }
            snk.push_back(shead);
            map[shead] = 2;
            draw_map();
        }

    } while (k != 27);          // 按鍵盤左上方的ESC，可以結束程式

    return 0;
}
