/*Name-Purvansha Gehlod
PRN-22070123088
EXP-8(Part-A)*/
#include<iostream>
using namespace std;
int main()
{
    int mat[3][2],i,j;
    cout<<"enter the values in the matrix:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"the given matrix is:"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
} 
/*Output
enter the values in the matrix:
2
2
2
4
5
6
the given matrix is:
2 2
2 4
5 6
*/

/* 
Name-Purvansha Gehlod
PRN-22070123088
Exp-8(Part-B)
Addition of Matrix*/
#include<iostream>
using namespace std;
int main()
{
    int r, c, a[3][3], b[3][3], sum[3][3], k, l;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl<< "Enter elements of 1st matrix: " << endl;
    for(k = 0; k < r; ++k)
       for(l = 0; l < c; ++l)
       {
           cout << "Enter element a" << k + 1 << l + 1 << " : ";
           cin >> a[k][l];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(k = 0; k < r; ++k)
       for(l = 0; l < c; ++l)
       {
           cout << "Enter element b" << k + 1 << l + 1 << " : ";
           cin >> b[k][l];
       }
    for(k = 0; k < r; ++k)
        for(l = 0; l < c; ++l)
            sum[k][l] = a[k][l] + b[k][l];
    cout << endl << "Sum of two matrix is: " << endl;
    for(k = 0; k < r; ++k)
        for(l = 0; l < c; ++l)
        {
            cout << sum[k][l] << "  ";
            if(l == c - 1)
                cout << endl;
        }

    return 0;
}
/*Output
Enter elements of 1st matrix:
Enter element a11 : 11
Enter element a12 : 12
Enter element a21 : 4
Enter element a22 : 5

Enter elements of 2nd matrix:
Enter element b11 : 5
Enter element b12 : 5
Enter element b21 : 6
Enter element b22 : 7

Sum of two matrix is:
16  17
10  12
*/


/*Name-Purvansha Gehlod
PRN-22070123088
EXP-8(Part-C)*/
#include<iostream>
using namespace std;
int main(){
{
    int a[3][3], b[3][3], mult[3][3], r1, c1, r2, c2, i, j, k;

    cout << "Enter rows and columns for first matrix: "<<" ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: "<<" ";
    cin >> r2 >> c2;
    while (c1!=r2)
    {
        cout << "Error! column of first matrix not equal to row of second."<<" ";

        cout << "Enter rows and columns for first matrix:"<<" ";
        cin >> r1 >> c1;

        cout << "Enter rows and columns for second matrix:"<<" ";
        cin >> r2 >> c2;
    }
    cout << endl << "Enter elements of matrix 1:" <<" ";

    for(i = 0; i < r1; ++i)
        for(j = 0; j < c1; ++j)
        {
            cout << "Enter element a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    cout << endl << "Enter elements of matrix 2:" << " ";
    for(i = 0; i < r2; ++i)
        for(j = 0; j < c2; ++j)
        {
            cout << "Enter element b" << i + 1 << j + 1 << " : ";
            cin >> b[i][j];
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }
    for(i = 0; i < r1; ++i)
        for(j = 0; j < c2; ++j)
            for(k = 0; k < c1; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }
    cout << endl << "Output Matrix: " << " ";
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout <<" ";
    }

    return 0;
}

} 
/*Output 
Enter rows and columns for first matrix:  2
2
Enter rows and columns for second matrix:  2
2

Enter elements of matrix 1: Enter element a11 : 1
Enter element a12 : 1
Enter element a21 : 1
Enter element a22 : 1

Enter elements of matrix 2: Enter element b11 : 1
Enter element b12 : 1
Enter element b21 : 1
Enter element b22 : 1

Output Matrix:   2 2  2 2
*/

/*Name-Purvansha Gehlod
PRN-22070123088
EXP-8(Part-D)
*/
#include<iostream>
using namespace std;
int main()
{
  int matrix[3][3];

  //Take input into Matrix
  cout << "Enter elements into the matrix: \n";
  for(int i=0; i<3 ; i++){
    for(int j=0; j<3; j++){
      cin >> matrix[i][j];
    }
  }
    
  //Output the diagonal elements
  cout << "Diagonal Elements: \n";
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if(i==j || i+j==3-1)
        cout << matrix[i][j] << "\t";
      else
        cout << " " << "\t";
    }
    cout << "\n";
  }
 
  return 0;
} 
/*Output
Enter elements into the matrix:
1 3 5
5 6 7
8 9 10
Diagonal Elements:
1               5
        6
8               10
*/


/*Name-Purvansha Gehlod
PRN-22070123088
EXP-8(Part-E)*/
#include<iostream>
using namespace std ;
int main()
{
    int mat[3][3];
    int a,b,i,j;
    cout<<"enter the elements of the matrix:";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"the matrix is:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"the  transposed matrix is:\n";
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<"\n";
    }
} 
/*Output
the matrix is:
1 3 4
5 6 7
8 9 1
the  transposed matrix is:
1 5 8
3 6 9
4 7 1
*/

/*Name-Purvansha Gehlod
PRN-22070123088
EXP-8(Part-F)*/
#include <iostream>
using namespace std;
 
int main()
{
  int matrix[3][3];
  int sum_left =0, sum_right = 0;
  cout << "Enter elements into the matrix \n";

  //Taking input into the Matrix and 
  //Adding if they are diagonal elements
  for(int i=0; i<3 ; i++){
    for(int j=0; j<3; j++){
      cin >> matrix[i][j];
      if(i==j)
        sum_left += matrix[i][j];
      if((i+j) == 2)
        sum_right += matrix[i][j];
    }
  }

  cout << "Sum of Left Diagonal: "<< sum_left << endl;
  cout << "Sum of Right Diagonal: "<< sum_right << endl;

  return 0;
}
/*
Output
Enter elements into the matrix 
1 3 4
5 6 7
8 9 1
Sum of Left Diagonal: 8
Sum of Right Diagonal: 18
*/
    
