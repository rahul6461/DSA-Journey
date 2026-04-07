# Binary Tree Right Side View

## Intuition
From the right side, we only see the last node at each level.

Instead of level order traversal, we can use a modified preorder traversal.

## Approach (Reverse Preorder)
We traverse the tree in:
Root → Right → Left order

- We maintain a global vector to store results.
- We pass the current depth (level) in recursion.
- If the current level equals the size of the vector:
  - It means this is the first node visited at this level
  - So we add it to the result

Since we visit right first, the first node at each level is the visible one.

## Complexity
Time: O(n)  
Space: O(h) (recursion stack)