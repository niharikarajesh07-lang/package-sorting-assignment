# Trace Tables: Merge Sort and Quick Sort

## 1. Input Data

| Package ID | Weight (kg) |
|---|---:|
| P1 | 20 |
| P2 | 15 |
| P3 | 20 |
| P4 | 10 |
| P5 | 15 |
| P6 | 20 |
| P7 | 25 |
| P8 | 10 |

Original sequence: `P1(20), P2(15), P3(20), P4(10), P5(15), P6(20), P7(25), P8(10)`

## 2. Merge Sort Trace Table

Merge Sort divides the array into smaller parts and merges them in sorted order.

| Step | Operation | Result |
|---|---|---|
| 1 | Merge P1 and P2 | P2(15), P1(20) |
| 2 | Merge P3 and P4 | P4(10), P3(20) |
| 3 | Merge P2, P1 with P4, P3 | P4(10), P2(15), P1(20), P3(20) |
| 4 | Merge P5 and P6 | P5(15), P6(20) |
| 5 | Merge P7 and P8 | P8(10), P7(25) |
| 6 | Merge the two right-side parts | P8(10), P5(15), P6(20), P7(25) |
| 7 | Merge both sorted halves | P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25) |

**Final Merge Sort Output:**

`P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25)`

Merge Sort preserves the original order of packages having equal weights because the merge function selects the left element when weights are equal.

## 3. Quick Sort Trace Table

Quick Sort selects the last element as the pivot and partitions the array around it. The following table shows the partition operations performed by the given C program.

| Step | Pivot (kg) | Operation | Array after partition |
|---|---:|---|---|
| 1 | 10 | Partition the full array | P8(10), P4(10), P3(20), P1(20), P5(15), P6(20), P7(25), P2(15) |
| 2 | 15 | Partition the right subarray | P8(10), P4(10), P2(15), P1(20), P5(15), P6(20), P7(25), P3(20) |
| 3 | 20 | Partition the remaining right subarray | P8(10), P4(10), P2(15), P3(20), P5(15), P6(20), P7(25), P1(20) |
| 4 | 20 | Partition the next subarray | P8(10), P4(10), P2(15), P3(20), P1(20), P6(20), P7(25), P5(15) |
| 5 | 15 | Partition the remaining subarray | P8(10), P4(10), P2(15), P3(20), P1(20), P5(15), P7(25), P6(20) |
| 6 | 20 | Partition the final right subarray | P8(10), P4(10), P2(15), P3(20), P1(20), P5(15), P6(20), P7(25) |

**Final Quick Sort Output:**

`P8(10), P4(10), P2(15), P3(20), P1(20), P5(15), P6(20), P7(25)`

## 4. Comparison of Results

| Feature | Merge Sort | Quick Sort |
|---|---|---|
| Sorting order | Ascending | Ascending |
| Stable | Yes | No guarantee |
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Auxiliary space | O(n) | O(log n) average |

## 5. Conclusion

Both algorithms sort the package weights in ascending order. Merge Sort is more suitable when the original order of packages with equal weights must be preserved, while Quick Sort can be useful when lower average auxiliary-space usage is preferred.
