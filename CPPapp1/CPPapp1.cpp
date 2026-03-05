#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // 為了方便調整，我們先設定好兩個欄位的寬度
    const int nameWidth = 20;
    const int priceWidth = 12;
    const int totalWidth = nameWidth + priceWidth;

    // --- 1. 印出頂部標題列 ---
    // 利用 setfill 填滿等號
    cout << setfill('=') << setw(11) << ""
        << " 購物收據範例 "
        << setw(11) << "" << endl;

    // --- 2. 印出欄位名稱 ---
    // 記得把 setfill 改回填滿空白，以免整個版面都是等號
    cout << setfill(' ');
    cout << left << setw(nameWidth) << "品項名稱"
        << right << setw(priceWidth) << "單價" << endl;

    // --- 3. 印出減號分隔線 ---
    cout << setfill('-') << setw(totalWidth) << "" << endl;
    cout << setfill(' '); // 再次改回空白

    // --- 4. 印出商品清單 (固定兩位小數) ---
    // 設定為 fixed (固定小數點) 並保留 2 位
    cout << fixed << setprecision(2);

    cout << left << setw(nameWidth) << "蘋果"
        << right << setw(priceWidth) << 50.00 << endl;

    cout << left << setw(nameWidth) << "香蕉"
        << right << setw(priceWidth) << 12.35 << endl;

    cout << left << setw(nameWidth) << "火龍果(特價)"
        << right << setw(priceWidth) << 1234.50 << endl;

    // --- 5. 印出底部等號分隔線 ---
    cout << setfill('=') << setw(totalWidth) << "" << endl;

    // --- 6. 總計 (切換為科學記號) ---
    double total = 50.00 + 12.35 + 1234.50; // 總計為 1296.85

    cout << setfill(' '); // 恢復空白
    // 使用 scientific 切換為科學記號，搭配 setprecision(2) 會自動四捨五入變成 1.30e+03
    cout << "總計(科學記號表示): " << scientific << setprecision(2) << total << endl;

    return 0;
}
