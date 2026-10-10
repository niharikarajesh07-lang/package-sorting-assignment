# package-sorting-assignment
Merge Sort and Quick Sort analysis using C
# Package Sorting Using Merge Sort and Quick Sort

## 1. Aim
To implement Merge Sort and Quick Sort in C to sort package weights and compare their performance, stability, time complexity, and space complexity.

## 2. Problem Statement
A logistics company receives packages with weights 20, 15, 20, 10, 15, 20, 25, and 10. Each package has a unique ID. The objective is to sort packages in ascending order of weight and verify whether packages with equal weights retain their original relative order.

## 3. Input Data

| Package ID | Weight |
|---|---:|
| P1 | 20 |
| P2 | 15 |
| P3 | 20 |
| P4 | 10 |
| P5 | 15 |
| P6 | 20 |
| P7 | 25 |
| P8 | 10 |

## 4. Algorithms Implemented
- **Merge Sort:** Divides the array into smaller subarrays and merges them in sorted order.
- **Quick Sort:** Selects a pivot and partitions the array based on package weights.

## 5. Execution Result
Both algorithms sort the weights in ascending order.

**Sorted output:**
`P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25)`

Merge Sort preserves the original relative order of packages with equal weights. Standard Quick Sort does not guarantee stability.

## 6. Complexity Analysis

| Complexity | Merge Sort | Quick Sort |
|---|---|---|
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Auxiliary space | O(n) | O(log n) average |

## 7. Comparison
Merge Sort is stable and suitable when preserving the original order of equal-weight packages is important. Quick Sort generally requires less auxiliary space but is not guaranteed to be stable.

## 8. Conclusion
Both algorithms successfully sort the package weights. Stable Merge Sort is the most suitable approach for this problem because it preserves the original relative order of packages with equal weights.

## 9. Files Included
- `package_sorting.c` – C source code
- `input.txt` – Input data
- `output.txt` – Execution output
- `trace_table.md` – Intermediate trace tables
- `analysis.md` – Performance comparison and complexity analysis
- `README.md` – Assignment overview and instructions

## 10. How to Run
Compile using GCC:

```bash
gcc package_sorting.c -o package_sorting
```

Run the program:

```bash
./package_sorting
```

On Windows, run `package_sorting.exe` after compilation.
