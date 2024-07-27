#include <iostream>

class Number {
protected:
    int M;
    int N;
    int K;

public:
    Number(int m, int n, int k) : M(m), N(n), K(k) {}

    virtual void printSkippedNumbers() = 0; 
};

class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {}

    void printSkippedNumbers() override {
        for (int i = M; i <= N; i += (K + 1)) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    int M, N, K;
    std::cout << "Enter the starting number (M): ";
    std::cin >> M;
    std::cout << "Enter the ending number (N): ";
    std::cin >> N;
    std::cout << "Enter the number of numbers to skip (K): ";
    std::cin >> K;

    Skipper skipper(M, N, K);
    skipper.printSkippedNumbers();

    return 0;
}
