#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, N;
    double S;

    cout << "k = ";
    cin >> k;

    cout << "N = ";
    cin >> N;

    S = 1.0; // ��������� �������� S

    // ���� while
    int i = 1; // ����� "i" ��� ����� while
    while (i <= N) {
        S *= (k * k) / (N * N) * cos(N * N / (k * k));
        i++;
    }
    cout << "While: " << S << endl;

    // ���� do-while
    S = 1.0;
    i = 1; // ������� �������� "i" ����� ������������� do-while
    do {
        S *= (k * k) / (N * N) * cos(N * N / (k * k));
        i++;
    } while (i <= N);
    cout << "Do-While: " << S << endl;

    // ���� for (++k)
    S = 1.0;
    for (i = 1; i <= N; i++) {
        S *= (k * k) / (N * N) * cos(N * N / (k * k));
    }
    cout << "For (++k): " << S << endl;

    // ���� for (--k)
    S = 1.0;
    for (i = N; i >= 1; i--) {
        S *= (k * k) / (N * N) * cos(N * N / (k * k));
    }
    cout << "For (--k): " << S << endl;

    return 0;
}
