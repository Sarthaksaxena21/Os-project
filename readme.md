# Energy-Efficient CPU Scheduling Algorithm (EECSA)

## Overview
This project implements an energy-efficient CPU scheduling algorithm using:
- DVFS (Dynamic Voltage Frequency Scaling)
- Thermal-aware scheduling
- Workload prediction

## Algorithms Compared
- FCFS
- EECSA (Proposed)

## Features
- Heterogeneous cores (big + little)
- Energy tracking
- Temperature simulation
- CSV logging
- Graph generation

## How to Run

### Compile
make

### Execute
./scheduler

### Generate Graphs
python plot.py

## Output
- results.csv
- energy.png
- temp.png

## Results
EECSA reduces energy consumption while maintaining performance compared to FCFS.

Sarthak Saxena