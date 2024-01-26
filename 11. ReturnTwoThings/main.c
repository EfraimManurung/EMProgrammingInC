#include <stdio.h>
#include <assert.h>

// First option
void get_max_and_min (double * values, int length, double *pmin, double *pmax)
{
    assert(length > 0);
    double max = values[0];
    double min = values[0];

    for (int i=0; i < length; i++) {
        if (values[i] > max)
            max = values[i];
        if (values[i] < min)
            min = values[i];
    }

    if (pmax != NULL) {
        *pmax = max;
    }

    if (pmin != NULL) {
        *pmin = min;
    }
}

typedef struct
{
    /* data */
    double max,min;
} number_range;


number_range get_max_and_min_2 (double * values, int length)
{
    assert(length > 0);
    double max = values[0];
    double min = values[0];

    number_range result;
    result.min = values[0];
    result.max = values[0];

    for (int i=0; i < length; i++) {
        if (values[i] > result.max)
            result.max = values[i];
        if (values[i] < result.min)
            result.min = values[i];
    }

    return result;
}


int main() {
    double values[4] = {9.8, 1.2, 14, 1.1};

    double mymin, mymax;
    get_max_and_min(values, 4, &mymin, &mymax);
    printf("(%lf, %lf)\n", mymax, mymin);

    number_range nr;
    nr = get_max_and_min_2(values, 4);
    printf("(%lf, %lf)\n", nr.max, nr.min);
}
