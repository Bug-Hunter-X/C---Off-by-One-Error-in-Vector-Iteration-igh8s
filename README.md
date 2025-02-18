# C++ Off-by-One Error Example

This repository demonstrates a classic off-by-one error in C++ when iterating over a `std::vector`.  The error occurs because the loop condition `i <= vec.size()` attempts to access an element beyond the valid range of the vector.