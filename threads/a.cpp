#include <vector>
#include <iostream>
#include <algorithm>
#include <thread>

using namespace std;

double sum(const vector<double>& v) {
    double res = 0;
    for(double val : v)
        res += val;
    return res;
}

double product(const vector<double>& v) {
    double res = 1;
    for(double val : v)
        res *= val;
    return res;
}

int main(void) {
    vector<double> some_vec {1, 2, 3, 4, 5, 6, 7};

    double resSum, resProd;
    thread t1{[&]{resSum = sum(some_vec);}};
    thread t2{[&]{resProd = product(some_vec);}};

    t1.join();
    t2.join();
    cout << "Sum: " << resSum << " Product " << resProd << endl;

    return 0;
}

