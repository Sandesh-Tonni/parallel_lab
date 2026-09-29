# Parallel Computing Lab

# Experiment 1: Matrix Multiplication

## Aim

To implement 4000 × 4000 matrix multiplication using different parallel computing approaches and compare their execution performance.

The experiment consists of four methods:

1. Sequential CPU execution
2. OpenMP shared-memory parallelism
3. VMware + MPI distributed-memory execution
4. CUDA GPU parallelism

---

## Method 1: Sequential Matrix Multiplication

### Objective

To implement matrix multiplication using a single sequential CPU execution flow and establish the baseline execution time.

### Configuration

- Language: C
- Compiler: GCC 15.2.0
- Matrix Size: 4000 × 4000
- Execution Model: Sequential

### Result

| Parameter | Result |
|---|---|
| Matrix Size | 4000 × 4000 |
| Execution Time | 48.008434 seconds |
| Verification C[0][0] | 4000.00 |

---

## Method 2: OpenMP Matrix Multiplication

### Objective

To implement matrix multiplication using OpenMP threads on shared CPU memory.

### Configuration

- Language: C
- Compiler: GCC 15.2.0
- Matrix Size: 4000 × 4000
- OpenMP Threads: 8

### Result

| Parameter | Result |
|---|---|
| Matrix Size | 4000 × 4000 |
| Number of Threads | 8 |
| Execution Time | 14.823949 seconds |
| Verification C[0][0] | 4000.00 |

---

## Method 3: VMware + MPI Matrix Multiplication

### Objective

To implement distributed-memory matrix multiplication using MPI across Ubuntu virtual machines running in VMware.

### Configuration

- MPI: Open MPI
- Virtualization: VMware
- Matrix Size: 4000 × 4000
- Architecture: 1 Master + 3 Worker VMs
- MPI Processes: 4

### MPI Operations

- MPI_Send()
- MPI_Recv()
- MPI_Scatter()
- MPI_Bcast()
- MPI_Gather()
- MPI_Wtime()

### Result

To be completed.

---

## Method 4: CUDA Matrix Multiplication

### Objective

To implement matrix multiplication using CUDA GPU parallelism.

### Configuration

- Language: CUDA C/C++
- Compiler: nvcc
- Matrix Size: 4000 × 4000
- GPU: To be recorded

### Result

To be completed.

---

## Overall Experiment

All four methods perform the same mathematical operation:

A = 4000 × 4000

B = 4000 × 4000

C = A × B

All elements of A and B are initialized to 1.0.

Therefore:

C[0][0] = 4000.00

The execution time of each implementation will be recorded and compared.

---

## Directory Structure

```text
parallel_lab/
│
├── README.md
│
├── sequential/
│   ├── matrix_sequential.c
│   └── matrix_sequential
│
├── openmp/
│   ├── matrix_openmp.c
│   └── matrix_openmp
│
├── vmware/
│   └── MPI files
│
└── cuda/
    ├── matrix_cuda.cu
    └── CUDA executable
