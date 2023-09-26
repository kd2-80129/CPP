#include <iostream>
using namespace std;

class Matrix
{
private:
    int row;
    int col;
    int **matrix;

public:
    Matrix() : row(0), col(0), matrix(NULL) {}
    Matrix(int row, int col) : row(row), col(col)
    {
        matrix = new int *[row];
        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
        }
    }
    void accept()
    {
        cout << "Enter the matrix: " << endl;
        for (int i = 0; i < row; i++)
        {
            cout << "Enter the " << i << "th row" << endl;
            for (int j = 0; j < col; j++)
            {
                cin >> this->matrix[i][j];
            }
        }
    }
    void display()
    {
        cout << "Your matrix is: " << endl;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << this->matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix add(Matrix &B)
    {
        Matrix add(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                add.matrix[i][j] = this->matrix[i][j] + B.matrix[i][j];
            }
        }
        return add;
    }
    Matrix sub(Matrix &B)
    {
        Matrix sub(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                sub.matrix[i][j] = this->matrix[i][j] - B.matrix[i][j];
            }
        }
        return sub;
    }
    Matrix multiply(Matrix &B)
    {
        Matrix mul(row, col);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mul.matrix[i][j] = 0;
                for (int k = 0; k < row; k++)
                {
                    mul.matrix[i][j] += this->matrix[i][k] * B.matrix[k][j];
                }
            }
        }
        return mul;
    }
    Matrix transpose()
    {
        Matrix transpose(row,col);
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                transpose.matrix[i][j] = this->matrix[j][i];
        return transpose;
    }
};

int main()
{
    int rows, cols;
    cout << "Enter Rows and Cols for the matrix A: " << endl;
    cin >> rows >> cols;

    Matrix A(rows, cols);
    A.accept();

    cout << "Enter Rows and Cols for the matrix B: " << endl;
    cin >> rows >> cols;

    Matrix B(rows, cols);
    B.accept();

    Matrix C = A.add(B);
    C.display();

    Matrix D = A.sub(B);
    D.display();

    Matrix E = A.multiply(B);
    E.display();

    Matrix F = A.transpose();
    F.display();

    return 0;
}
