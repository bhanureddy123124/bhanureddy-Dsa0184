#include <iostream>

class Number {
protected:
    int M;

public:
    Number(int m) : M(m) {}

    void printNumbers(int N, int K) {
        for (int i = M; i <= N; i += K) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
};

class Skipper : public Number {
public:
    Skipper(int m) : Number(m) {}

    void printSkipNumbers(int N, int K) {
        printNumbers(N, K);
    }
};

int main() {
    int M = 50;
    int N = 100;
    int K = 7;

    Skipper skipper(M);

    std::cout << "Numbers from " << M << " to " << N << " by skipping " << K << " numbers:" << std::endl;
    skipper.printSkipNumbers(N, K);

    return 0;
}

