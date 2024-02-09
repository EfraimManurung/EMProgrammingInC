#include <stdio.h>
#include <assert.h>

/* how to make a function that return two values */
void get_max_and_min(double * values, int length, double *pmin, double *pmax)
{
    assert(length > 0);
    double max = values[0];
    double min = values[0];

    for (int i=0; i < length; i++)
    {
        if (values[i] > max)
            max = values[i];
        if (values[i] < min)
            min = values[i];
    }

    if (pmin != NULL) {
        *pmin = min;
    }
    
    if (pmax != NULL) {
        *pmax = max;
    }
}

typedef struct {
    double max, min;
} number_range;

number_range get_max_and_min_2(double * values, int length)
{
    assert(length > 0);

    number_range result;
    result.min = values[0];
    result.max = values[0];

    for (int i=0; i < length; i++)
    {
        if (values[i] > result.max)
            result.max = values[i];
        if (values[i] < result.min)
            result.min = values[i];
    }

    return result;
}

int main()  {
    double values[5] = {9.8, 1.2, -75.2, 14, 3};

    double mymin, mymax;
    get_max_and_min(values, 5, &mymin, &mymax);
    printf("(%lf, %lf)\n", mymax, mymin);

    number_range nr;
    nr = get_max_and_min_2(values, 5);
    printf("(%lf, %lf)\n", nr.max, nr.min);

    return 0;
}