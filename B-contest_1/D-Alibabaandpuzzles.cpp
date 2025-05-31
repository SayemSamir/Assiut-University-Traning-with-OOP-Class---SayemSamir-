#include <iostream>
using namespace std;
class EquationSolver {
public:
    long long A, B, C, D;
    EquationSolver(long long a, long long b, long long c, long long d)
        : A(a), B(b), C(c), D(d) {}
    bool checkWithOperator(char firstOperator) const {
        switch (firstOperator) {
            case '+':
                return (A + B - C == D) || (A + B * C == D);
            case '-':
                return (A - B + C == D) || (A - B * C == D);
            case '*':
                return (A * B + C == D) || (A * B - C == D);
            default:
                return false;
        }
    }
    bool isSolvable() const {
        return checkWithOperator('+') || checkWithOperator('-') || checkWithOperator('*');
    }
};
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    EquationSolver solver(A, B, C, D);
    cout << (solver.isSolvable() ? "YES" : "NO");
}
