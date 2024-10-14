#include <iostream>
#include <cmath>
using namespace std;

void computeStatistics(double* arr, int n, double& sum, double& mean, double& stddev) {
    sum = 0.0;
    mean = 0.0;
    stddev = 0.0;

    
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }

   
    mean = sum / n;

 
    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(*(arr + i) - mean, 2);
    }
    stddev = sqrt(variance / n);
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double* arr = new double[n];
    cout << "Enter " << n << " real numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> *(arr + i);
    }

    double sum, mean, stddev;
    computeStatistics(arr, n, sum, mean, stddev);

    cout << "Sum: " << sum << endl;
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stddev << endl;

    delete[] arr;
    return 0;
}
