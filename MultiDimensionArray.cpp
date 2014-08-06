#include <iostream>
#include <string>
using namespace std;
int const X = 5;

typedef int var[X];
void ArrayAllocation();
int main()
{
var* ptr;

int  Y = 5;
ptr = (var*)malloc(Y*X*sizeof(int));
if(ptr == NULL)return 0;
for(int rows = 0 ; rows < X ; rows++)
{
	for(int columns = 0 ; columns < Y ; columns++)
	{
		ptr[rows][columns] = 2 * rows;
		cout << ptr[rows][columns];
	}
}
ArrayAllocation();
}

// Two dimension allocation can be achieved only if no of coloumns is known.in the above method.

void ArrayAllocation()
{

    int nrows = 5;     /* Both nrows and ncols could be evaluated */
    int ncols = 10;    /* or read in at run time */
    int row;
    int **rowptr;
    rowptr = malloc(nrows * sizeof(int *));
    if (rowptr == NULL)
    {
        puts("\nFailure to allocate room for row pointers.\n");
        exit(0);
    }

    printf("\n\n\nIndex   Pointer(hex)   Pointer(dec)   Diff.(dec)");

    for (row = 0; row < nrows; row++)
    {
        rowptr[row] = malloc(ncols * sizeof(int));
        if (rowptr[row] == NULL)
        {
            printf("\nFailure to allocate for row[%d]\n",row);
            exit(0);
        }
        printf("\n%d         %p         %d", row, rowptr[row], rowptr[row]);
        if (row > 0)
        printf("              %d",(int)(rowptr[row] - rowptr[row-1]));
    }

    return 0;

}