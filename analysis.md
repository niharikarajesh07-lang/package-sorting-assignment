# Algorithm Analysis: Merge Sort vs Quick Sort

## 1. Aim

To implement Merge Sort and Quick Sort in C, sort package weights in ascending order, and compare their performance, stability, and complexity.

## 2. Input Data

The package weights are:

`20, 15, 20, 10, 15, 20, 25, 10`

Each package is assigned a unique ID from P1 to P8.

## 3. Algorithm Analysis

### Merge Sort

Merge Sort divides the array into smaller subarrays, sorts them recursively, and merges them into a sorted array.

- **Best-case time complexity:** O(n log n)
- **Average-case time complexity:** O(n log n)
- **Worst-case time complexity:** O(n log n)
- **Auxiliary space complexity:** O(n)
- **Stability:** Stable

Merge Sort preserves the original relative order of packages with equal weights because the merge function uses the `<=` condition.

### Quick Sort

Quick Sort selects a pivot, partitions the array, and recursively sorts the resulting subarrays.

- **Best-case time complexity:** O(n log n)
- **Average-case time complexity:** O(n log n)
- **Worst-case time complexity:** O(n²)
- **Average auxiliary space complexity:** O(log n) for recursion
- **Stability:** Not guaranteed

In this implementation, the last element is selected as the pivot. The worst case can occur when partitioning repeatedly produces highly unbalanced subarrays.

## 4. Comparison Table

| Criteria | Merge Sort | Quick Sort |
|---|---|---|
| Best-case time | O(n log n) | O(n log n) |
| Average-case time | O(n log n) | O(n log n) |
| Worst-case time | O(n log n) | O(n²) |
| Auxiliary space | O(n) | O(log n) average |
| Stability | Stable | Not guaranteed |
| Main operation | Merging subarrays | Partitioning around a pivot |

## 5. Results

Both algorithms sort the package weights in ascending order.

**Merge Sort output:**

`P4(10), P8(10), P2(15), P5(15), P1(20), P3(20), P6(20), P7(25)`

Merge Sort preserves the relative order of packages with equal weights. Quick Sort also sorts the weights correctly, but the relative order of equal-weight packages may change.

## 6. Suitable Algorithm

Merge Sort is the preferred algorithm for this problem because package IDs must be retained and preserving the original order of packages with equal weights may be important.

Although Merge Sort requires O(n) additional space, it guarantees O(n log n) time complexity in the best, average, and worst cases.

## 7. Conclusion

Both algorithms successfully sort the package weights. Merge Sort is more suitable when stability and predictable performance are important, while Quick Sort offers good average-case performance with lower average auxiliary-space usage.

