#include <iostream>

using namespace std;

// 判斷是否為質數的函式
bool isPrime(int n) {
    // 1 和小於 1 的數字都不是質數
    if (n <= 1) {
        return false;
    }
    
    // 檢查從 2 開始到 √n 的數字
    // 條件使用 i * i <= n 可以避免計算平方根 (sqrt)，提高執行效率
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            // 如果 n 能被 i 整除，代表它有除了 1 和自己以外的因數，因此不是質數
            return false; 
        }
    }
    
    // 如果迴圈跑完都沒有被整除，那它就是質數
    return true; 
}

int main() {
    int num;
    
    cout << "請輸入一個整數: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " 是質數。" << endl;
    } else {
        cout << num << " 不是質數。" << endl;
    }

    return 0;
}