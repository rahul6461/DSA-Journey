# Decode Ciphertext

## Intuition
The encoded text is written row-wise in a matrix.
The original text can be obtained by traversing diagonally.

## Approach
- Compute number of columns = n / rows
- Start from each column in first row
- Traverse diagonally (i++, j++)
- Append characters to result
- Remove trailing spaces

## Complexity
Time: O(n)  
Space: O(1)