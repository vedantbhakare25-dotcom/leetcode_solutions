class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long square = mid * mid;

            if (square == x) {
                return mid;
            }
            else if (square < x) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return high;  
    }
};
/*
# Square Root Using Binary Search (Without sqrt())

### Idea

For a number `x`, the square root is the number whose square equals `x`.

Example:

* √25 = 5 because 5 × 5 = 25
* √40 ≈ 6.32, so the integer square root is 6

Instead of checking every number from 1 to `x`, we use **Binary Search** because the square of a number increases as the number increases.

---

### Search Space

The square root of `x` must lie between:

```cpp
0 and x
```

So we initialize:

```cpp
low = 0
high = x
```

---

### Finding the Middle Element

```cpp
mid = low + (high - low) / 2
```

This formula is used instead of:

```cpp
mid = (low + high) / 2
```

to avoid integer overflow when `low` and `high` are very large.

---

### Binary Search Logic

#### Case 1: Perfect Square Found

```cpp
if (mid * mid == x)
```

If the square of `mid` equals `x`, then `mid` is the square root.

Example:

```cpp
mid = 5
5 * 5 = 25
```

Return `5`.

---

#### Case 2: Square is Too Small

```cpp
if (mid * mid < x)
```

The answer must be greater than `mid`.

So search in the right half:

```cpp
low = mid + 1
```

Example:

```cpp
x = 40
mid = 4
4 * 4 = 16
```

Since 16 < 40, move right.

---

#### Case 3: Square is Too Large

```cpp
if (mid * mid > x)
```

The answer must be smaller than `mid`.

So search in the left half:

```cpp
high = mid - 1
```

Example:

```cpp
x = 40
mid = 9
9 * 9 = 81
```

Since 81 > 40, move left.

---

### Why Return `high`?

If `x` is not a perfect square, eventually:

```cpp
low > high
```

and the loop stops.

At this point:

* `high` is the largest number whose square is less than or equal to `x`
* `low` is the smallest number whose square is greater than `x`

Example for `x = 40`:

```cpp
6 * 6 = 36
7 * 7 = 49
```

Since:

```cpp
36 <= 40 < 49
```

the integer square root is `6`, which is stored in `high`.

Therefore:

```cpp
return high;
```

---

### Why Use `long long`?

```cpp
long long square = mid * mid;
```

For large values of `x`, `mid * mid` may exceed the range of `int`.

Example:

```cpp
46341 * 46341
```

is already greater than the maximum value an `int` can store.

Using `long long` prevents overflow and ensures correct calculations.

---

### Complexity Analysis

**Time Complexity:** `O(log x)`

* Each iteration cuts the search space in half.

**Space Complexity:** `O(1)`

* Only a few variables are used. */
