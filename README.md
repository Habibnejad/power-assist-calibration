# power-assist-calibration

Calibrate power assist levels in EPS systems.

## Overview
This repository contains a sample C program that demonstrates how to calibrate the power assist levels in an electric power steering (EPS) system. The program compares the measured torque at the steering column with the expected torque and calculates calibration factors to tune the assist accordingly.

## Features
- Reads arrays of measured and expected torque values to compute calibration factors.
- Prints the measured torque, expected torque, and computed calibration factor for each sample.
- Provides a simple starting point for more advanced calibration methods.

## Getting Started

Compile the program using `gcc` and run the resulting executable:

```bash
gcc -o power_assist_calibration main.c
./power_assist_calibration
`
e program will print measured and expected torque values along with calculated calibration factors.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
