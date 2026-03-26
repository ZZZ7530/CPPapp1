#include <iostream>

class Complex {
private:
    double real; // 實部
    double imag; // 虛部

public:
    // 建構子 (Constructor)
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // 多載加法運算子 (+)
    // (a + bi) + (c + di) = (a + c) + (b + d)i
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // 多載減法運算子 (-)
    // (a + bi) - (c + di) = (a - c) + (b - d)i
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // 多載乘法運算子 (*)
    // (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }

    // 多載除法運算子 (/)
    // (a + bi) / (c + di) = [(ac + bd) / (c^2 + d^2)] + [(bc - ad) / (c^2 + d^2)]i
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        
        // 簡單的除以零防護
        if (denominator == 0) {
            std::cerr << "\n錯誤：除數不能為零！" << std::endl;
            return Complex(0, 0); 
        }
        
        double result_real = (real * other.real + imag * other.imag) / denominator;
        double result_imag = (imag * other.real - real * other.imag) / denominator;
        
        return Complex(result_real, result_imag);
    }

    // 多載輸出串流運算子 (<<)，方便直接用 cout 印出複數
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        os << c.real;
        if (c.imag >= 0) {
            os << " + " << c.imag << "i";
        } else {
            os << " - " << -c.imag << "i";
        }
        return os;
    }
};

int main() {
    // 建立兩個複數物件
    Complex c1(4.0, 3.0); // 4 + 3i
    Complex c2(2.0, 1.0); // 2 + 1i

    std::cout << "複數 c1 = " << c1 << std::endl;
    std::cout << "複數 c2 = " << c2 << std::endl;
    std::cout << "----------------------" << std::endl;

    // 測試加法
    Complex sum = c1 + c2;
    std::cout << "加法 (c1 + c2) = " << sum << std::endl;

    // 測試減法
    Complex diff = c1 - c2;
    std::cout << "減法 (c1 - c2) = " << diff << std::endl;

    // 測試乘法
    Complex prod = c1 * c2;
    std::cout << "乘法 (c1 * c2) = " << prod << std::endl;

    // 測試除法
    Complex quot = c1 / c2;
    std::cout << "除法 (c1 / c2) = " << quot << std::endl;

    return 0;
}
