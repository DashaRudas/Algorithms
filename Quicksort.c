#include <stdio.h>
void quicksort(int mass[], int n) {

        int j = 0;
        int i = n - 1;

        while (j <= i)
        {
            while(mass[j] < mass[n / 2])
            {
                j++;
            }
            while(mass[i] > mass[n / 2])
            {
                i--;
            }

            if (j <= i)
            {
                int x = mass[j];
                mass[j] = mass[i];
                mass[i] = x;
                j++;
                i--;
            }
        }
        if (j < n)
        {
            quicksort(&mass[j], n - j);
        }
        if(i > 0)
        {
            quicksort(mass,i + 1);
        }
}
int main()
{
    int i, A[1000];
    FILE *f1;
    f1= fopen("C:\\Users\\dashk\\Desktop\\tests\\input1.txt", "r" );

    for(i = 0; i < 1000; ++i)
    {
        fscanf(f1, "%d", &A[i]);
    }
    fclose(f1);
    quicksort(A, 1000);
    FILE *f2;
    f2 = fopen("C:\\Users\\dashk\\Desktop\\tests\\output1.txt", "w");
    for(i = 0; i < 1000; ++i)
    {
        fprintf(f2,"%d\n", A[i]);
    }
    fclose(f2);
    return 0;
}
