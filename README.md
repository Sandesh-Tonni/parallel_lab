# Parallel Computing Lab

## Experiment 1: Sequential Matrix Multiplication

### Objective
To implement and execute sequential matrix multiplication and measure its execution time.

### Implementation
- Language: C
- Compiler: GCC 15.2.0
- Matrix Size: 4000 × 4000
- Execution Type: Sequential

### Result

| Parameter | Result |
|---|---|
| Matrix Size | 4000 × 4000 |
| Execution Time | 48.008434 seconds |
| Verification C[0][0] | 4000.00 |

---

## Experiment 2: OpenMP Matrix Multiplication

### Objective
To implement matrix multiplication using OpenMP and measure the execution time using multiple threads.

### Implementation
- Language: C
- Compiler: GCC 15.2.0
- Matrix Size: 4000 × 4000
- Parallelization: OpenMP
- Number of Threads: 8

### Result

| Parameter | Result |
|---|---|
| Matrix Size | 4000 × 4000 |
| Number of Threads | 8 |
| Execution Time | 14.823949 seconds |
| Verification C[0][0] | 4000.00 |

### Conclusion
The OpenMP implementation successfully performed matrix multiplication using 8 threads. The verification value C[0][0] was 4000.00.
