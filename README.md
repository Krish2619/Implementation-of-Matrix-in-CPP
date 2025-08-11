1. Aim:
To create a set of C++ programs that demonstrate fundamental matrix operations including:
- Input and display of a matrix
- Addition of two matrices
- Multiplication of two matrices
- Calculation of diagonal sums of a square matrix
- Transposition of a matrix

2. Apparatus / Requirements:
- C++ Compiler (e.g., g++, Code::Blocks, Visual Studio)
- Familiarity with loops (for loops) and conditionals
- Text-based input/output via console

3. Key Concepts:
- Representation of matrices using 2D arrays
- Nested loops for traversing matrices row-wise and column-wise
- Matrix addition (element-wise sum)
- Matrix multiplication (dot product of rows and columns)
- Calculation of main and secondary diagonal sums
- Handling overlapping center element in odd-sized matrices
- Matrix transpose (swapping rows and columns)
- Validity checks for operations (e.g., multiplication dimension compatibility)

4. Algorithms:

   Program 1: Matrix Input and Display

   1. Input number of rows and columns.
   2. Declare a 2D array of appropriate size.
   3. Input each element from the user.
   4. Display the matrix.

   Program 2: Addition of Two Matrices

   1. Input dimensions of matrices.
   2. Input elements for both matrices.
   3. Add corresponding elements and store in a result matrix.
   4. Display both input matrices and the resulting sum matrix.

   Program 3: Multiplication of Two Matrices

   1. Input dimensions of the two matrices.
   2. Verify compatibility (columns of first = rows of second).
   3. Input elements for both matrices.
   4. Multiply matrices using triple nested loops.
   5. Display the product matrix.

   Program 4: Diagonal Sum of a Square Matrix

   1. Input size of the square matrix.
   2. Input matrix elements.
   3. Sum elements of the main diagonal and secondary diagonal.
   4. Adjust total if the matrix size is odd by subtracting the center element once.
   5. Display diagonal sums and total.

   Program 5: Transpose of a Matrix

   1. Input number of rows and columns.
   2. Input matrix elements.
   3. Generate transpose by swapping rows and columns.
   4. Display original and transposed matrices.

5. Program Explanations:
   
- Program 1 Explanation:
  The program allows the user to input any a x b matrix and then prints the matrix in a formatted way. It demonstrates array declaration, nested loops for input/output, and indexing.

- Program 2 Explanation:
  This program takes two matrices of the same dimension and calculates their sum by adding corresponding elements. It shows practical use of nested loops for matrix input, addition, and output formatting.

- Program 3 Explanation:
  Matrix multiplication is implemented here with validation for dimension compatibility. The program uses triple nested loops: two for iterating through the resulting matrix indices and one for calculating the dot product    for each element. It highlights important mathematical constraints for matrix multiplication.

- Program 4 Explanation:
  The program calculates the sum of the main and secondary diagonals of a square matrix. It takes care to avoid double counting the center element if the matrix size is odd, demonstrating careful index handling and           conditional logic.

- Program 5 Explanation:
 This program computes the transpose of any given matrix by swapping the row and column indices. It prints both the original and the transposed matrices, illustrating index manipulation in 2D arrays.

6. Conclusion:
These five programs collectively cover essential matrix operations and provide a solid foundation for understanding matrix handling in C++. They emphasize the importance of:
- Accurate indexing in 2D arrays
- Use of nested loops for traversing matrices
- Mathematical conditions required for operations like multiplication
- Careful handling of edge cases such as the center element in diagonal sums
- Matrix transformation techniques such as transpose
- These programs are valuable exercises for anyone learning C++ programming and matrix computations.
