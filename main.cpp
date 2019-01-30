#define MEM_ALLOC 3  // allocate dynamically 3 ints

#include <iostream>

using namespace std;

void allocateMem(int v[])
{
    v = new int[MEM_ALLOC];
}

void readArray (int v[])
{
    int i = 0, value = 0, n;
    cout << "Enter elements, \'-1\' to stop:" << endl;
    while ( value != -1)
    {
		if ( i % 2 == 0 && i > 0)
		{
			allocateMem(v);
		}
        cout << "Enter v[" << i << "]= ";
        cin >> value;
        v[i] = value;
        i++;
    }
	n = sizeof(v) / sizeof(*v);
	
	// for debug only
	for (i = 0; i < n; i++)
		cout << v[i] << ", " << endl;
	
}

void displayArray (int v[], int n)
{
    cout << "Display array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(void)
{
    int *v, n;
    v = new int[MEM_ALLOC];

    readArray(v);
	// for debug only
	cout << "size of v = " << sizeof(v) << endl;
    n = sizeof(v) / sizeof(*v);
    displayArray(v, n);

    return 0;
}
