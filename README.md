# Off-by-One Error in Vector Iteration
This example demonstrates a common off-by-one error when iterating through a `std::vector` in C++.  The loop condition `i <= vec.size()` is incorrect; it attempts to access an element that is out of bounds, resulting in undefined behavior.

The solution shows the correct way to iterate, using `<` instead of `<=` to prevent the error.