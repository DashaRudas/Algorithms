#include <stdio.h>

void proseivanie(int mass[], int first, int last){
        int b;
        int new = mass[first];

        while(first <= last / 2)
        {
            b = 2 * first;

            if( b < last && mass[b] < mass[b + 1] )
            {
               b++;
            }
            if( new >= mass[b] )
            {
                break;
            }

            mass[first] = mass[b];
            first = b;
        }
        mass[first] = new;
    }
void heapsort(int mass[], int size){
    int i, x;
    for(i = size / 2 - 1; i >= 0; i--)
    {
        proseivanie(mass, i, size - 1);
    }
    for(i = size - 1; i > 0; i--)
    {

        x = mass[i];
        mass[i] = mass[0];
        mass[0] = x;

        proseivanie(mass, 0, i - 1);
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
    heapsort(A, 1000);
    FILE *f2;
    f2 = fopen("C:\\Users\\dashk\\Desktop\\tests\\output1.txt", "w");
    for(i = 0; i < 1000; ++i)
    {
        fprintf(f2,"%d\n", A[i]);
    }
    fclose(f2);

    return 0;
}
