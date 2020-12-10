#include <stdio.h>
void shellsort(int mass[], int n) {
    int x, y, step = 1;
    while(step < n / 3)
    {
        step = 3 * step + 1;
    }
    while(step >= 1)
    {
        for(int i = 0; i < step; i++)
        {
            int j = i + step;
            while (j <= n)
            {
                x = mass[j];
                y = j - step;
                while(y >= i && mass[y] > x)
                {
                    mass[y + step] = mass[y];
                    y = y - step;
                }
                mass[y + step] = x;
                j = j + step;
            }
            step = (step - 1) / 3;
        }
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
        shellsort(A, 1000);
        FILE *f2;
        f2 = fopen("C:\\Users\\dashk\\Desktop\\tests\\output1.txt", "w");
        for(i = 0; i < 1000; ++i)
        {
           fprintf(f2,"%d\n", A[i]);
        }
        fclose(f2);
        return 0;
    }