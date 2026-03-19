#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    int totalCount = 0; // 改回顯式型別 int

    vector<string> orderList;

    cout << "===== 歡迎來到 C++ 點餐系統 =====" << endl;

    while (true) {
        cout << "\n選單: 1.珍珠奶茶 2.綠茶 3.結束點餐" << endl;
        cout << "請輸入選擇: ";
        if (!(cin >> choice)) break; // 增加防呆

        if (choice == 3) break;

        switch (choice) {
        case 1:
            orderList.push_back("珍珠奶茶");
            totalCount++;
            break;
        case 2:
            orderList.push_back("綠茶");
            totalCount++;
            break;
        default:
            cout << "無效選擇，請重新輸入。" << endl;
            continue;
        }
    }

    cout << "\n--- 訂單彙整 ---" << endl;
    if (orderList.empty()) {
        cout << "您沒有點任何東西。" << endl;
    }
    else {
        // 修改：使用傳統 for 迴圈
        for (size_t i = 0; i < orderList.size(); i++) {
            cout << "- " << orderList[i] << endl;
        }

        string discountMsg = (totalCount >= 5) ? "符合折扣資格！" : "未達折扣門檻。";
        cout << "\n總數: " << totalCount << " 杯，" << discountMsg << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "謝謝惠顧! ";
    }
    cout << endl;

    return 0;
}