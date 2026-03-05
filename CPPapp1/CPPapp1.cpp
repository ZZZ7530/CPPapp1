#include <iostream>
#include <iomanip> // 👈 新增標頭檔：為了使用 setprecision 與 fixed

using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "This is a C++ application.\n\n";

    // --- 1. 常數宣告示範 ---
    const double PI = 3.14159; // 宣告一個不可被修改的常數

    // --- 2. 變數宣告與初始化 ---
    int a = 5;
    double b(99.9876);         // 故意給一個多位小數，方便展示 setprecision
    auto str{ "Hello" };

    // --- 3. 輸出結果與格式控制 ---
    cout << "The value of a is: " << a << "，a的變數大小為 " << sizeof(a) << " bytes\n";

    // 加上 fixed 與 setprecision(2)，強制小數點後顯示兩位並四捨五入
    cout << fixed << setprecision(2);
    cout << "The value of b is: " << b << " (經過格式化)\n";

    cout << "The value of str is: " << str << "，str的變數大小為 " << sizeof(str) << " bytes\n";
    cout << "The constant PI is: " << PI << " (套用先前的設定，顯示兩位小數)\n";

    return 0;
}
