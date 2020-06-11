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
            cout << "□ ";
        }
        else {
            cout << "■ ";
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
        x = 185; // x = rand() % 361
        if(map[x]==0) break;
    }
    apple = x;
    map[x] = 3;
}

int main(void)
{

	init_map();
	new_apple();
	draw_map();

    return 0;
}
