#include <stdio.h>

/* function to heapify a subtree. Here 'i' is the
index of root node in array a[], and 'n' is the size of heap. */
void heapify(int a[], int n, int i)
{  
    int largest, left, right, temp;
    largest = i;        // Initialize largest as root
    left = 2 * i + 1;   // left child
    right = 2 * i + 2;  // right child

    // If left child is larger than root
    if (left < n && a[left] > a[largest])
        largest = left;

    // If right child is larger than root
    if (right < n && a[right] > a[largest])
        largest = right;
        
    // If root is not largest
    if (largest != i)
    {
        // swap a[i] with a[largest]
        temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}


/*Function to implement the heap sort*/
void heapSort(int a[], int n)
{
    int i, temp;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // One by one extract an element from heap
    for (i = n - 1; i >= 0; i--)
    {
        /* Move current root element to end*/
        // swap a[0] with a[i]
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;
        
        heapify(a, i, 0);
    }
}

/* function to print the array elements */
void printArr(int arr[], int n)
{  
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        printf(" ");
    }    
}


int main()
{
    int i, n, a[30];

    printf("\n\n\tHEAP SORT\n");
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
  
    printf("Before sorting array elements are - \n");
    printArr(a, n);

    heapSort(a, n);

    printf("\nAfter sorting array elements are - \n");
    printArr(a, n);

    return 0;
}