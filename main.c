#include <stdio.h>

// Function to compute calibration factor
double calibrate(double measuredTorque, double expectedTorque) {
    if (measuredTorque == 0) return 0;
    return expectedTorque / measuredTorque;
}

int main() {
    double measured[] = {10.0, 15.0, 20.0};
    double expected[] = {12.0, 18.0, 24.0};
    int n = sizeof(measured) / sizeof(measured[0]);
    for (int i = 0; i < n; ++i) {
        double factor = calibrate(measured[i], expected[i]);
        printf("Measured: %.2f Nm, Expected: %.2f Nm, Calibration Factor: %.2f\n",
               measured[i], expected[i], factor);
    }
    return 0;
}
