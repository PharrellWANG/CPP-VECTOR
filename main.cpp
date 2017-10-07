#include <iostream>
#include <vector>

int main() {
  unsigned long no_of_cols = 5;
  unsigned long no_of_rows = 10;
  int initial_value = 0;

  // define 2d vector
  std::vector<std::vector<int>> matrix;
  // init 2d vector
  matrix.resize(no_of_rows, std::vector<int>(no_of_cols, initial_value));

  // Save to matrix.
  matrix[1][2] = 5;
  // Read from matrix.
  int value = matrix[1][2];

  // Save to matrix.
  matrix[3][1] = value;

  // initialize the 1D vector you would like to insert into matrix
  std::vector<int> row;
  // reserve places for row.
  row.reserve(5);
  //initializing row with values
  for (int i = 0; i < 5; i++) {
    row.push_back(1);
  }

  //now inserting values into matrix
  matrix.push_back(row);

  // get the rows of the matrix
  std::cout << matrix.size() << std::endl;
  // get the cols of the matrix
  std::cout << matrix[0].size() << std::endl;

  // print out the matrix
  for (int i = 0; i < matrix.size(); i++) {
    std::cout << std::endl;
    for (int j = 0; j < matrix[0].size(); j++) {
      std::cout << matrix[i][j] << " ";
    }
  }

  return 0;
}