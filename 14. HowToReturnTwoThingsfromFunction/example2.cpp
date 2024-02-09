#include <stdio.h>
#include <assert.h>

class number_range{
    public:
        double max, min;
};

void get_max_and_min(double * values, int length, double& max_result, double& min_result)
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

    max_result = max;
    min_result = min;
}

number_range get_max_and_min_2(double * values, int length)
{
    assert(length > 0);

    number_range result;
    result.min = values[0];
    result.max = values[0];

    for(int i=0; i < length; i++) {
        if (values[i] > result.max)
            result.max = values[i];
        if (values[i] < result.min)
            result.min = values[i];
    }

    return result;
}

int main()
{
    double values[5] = {9.8, 1.2, -75.2, 14, 3};

    double mymin, mymax;
    get_max_and_min(values, 5, mymax, mymin);
    printf("(%lf, %lf)\n", mymax, mymin);

    number_range nr;
    nr = get_max_and_min_2(values, 5);
    printf("(%lf, %lf)\n", nr.max, nr.min);

    return 0;
}