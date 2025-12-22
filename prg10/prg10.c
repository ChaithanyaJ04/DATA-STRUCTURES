#include <stdio.h>

#define MAX 20

int hashtable[MAX];
int m;

/* Function to insert key using Linear Probing */
void insert(int key)
{
    int index = key % m;

    if (hashtable[index] == -1)
    {
        hashtable[index] = key;
    }
    else
    {
        int i = 1;
        while (hashtable[(index + i) % m] != -1)
        {
            i++;
        }
        hashtable[(index + i) % m] = key;
    }
}

/* Function to display hash table */
void display()
{
    printf("\nHash Table:\n");
    for (int i = 0; i < m; i++)
    {
        if (hashtable[i] != -1)
            printf("Address %d : %d\n", i, hashtable[i]);
        else
            printf("Address %d : Empty\n", i);
    }
}

int main()
{
    int n, key;

    printf("Enter size of hash table: ");
    scanf("%d", &m);

    printf("Enter number of employee records: ");
    scanf("%d",&n);

    // Initialize hash table
    for (int i = 0; i < m; i++)
        hashtable[i] = -1;

    printf("Enter %d employee keys(4-digit):\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &key);
        insert(key);
    }

    display();

    return 0;
}
