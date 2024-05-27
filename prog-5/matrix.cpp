#include "matrix.hpp"
#include <iostream>
#include <sstream>
using namespace std;

Matrix::Matrix() : rows(0), cols(0) {}

void Matrix::readMatrix()
{
    string line;
    cout << "Enter matrix rows (enter an empty line to stop):" << endl;
    while (getline(cin, line) && !line.empty())
    {
        istringstream stream(line);
        vector<int> row;
        int num;
        while (stream >> num) // // Read integers from the line into the row vector
        {
            row.push_back(num);
        }
        if (matrix.empty())
        {
            cols = row.size();
        }
        else if (row.size() != cols)
        {
            cerr << "Error: Inconsistent number of columns in rows." << endl;
            return;
        }
        matrix.push_back(row);
        rows++;
    }
}

int Matrix::getRowCount() const
{
    return rows;
}

int Matrix::getColCount() const
{
    return cols;
}

// vector<int> Matrix::getRow(int index) const
// {
//     if (index < 0 || index >= rows)
//     {
//         cerr << "Error: Row index out of bounds." << endl;
//         return vector<int>();
//     }
//     return matrix[index];
// }

// void Matrix::printSecondRow() const
// {
//     if (rows >= 2)
//     {
//         std::vector<int> secondRow = getRow(1);
//         std::cout << "Second row elements: ";
//         for (int elem : secondRow)
//         {
//             std::cout << elem << " ";
//         }
//         std::cout << std::endl;
//     }
//     else
//     {
//         std::cout << "Matrix does not have a second row." << std::endl;
//     }
// }
