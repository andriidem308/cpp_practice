#ifndef C_PROJECT_INTERPOLATION_H
#define C_PROJECT_INTERPOLATION_H

#include <glob.h>

#define integer int
#define floating_point double
#define character char
#define file_t FILE*

struct DVector{
    size_t dim;
    floating_point *coordinates;
};
typedef struct DVector DVector;


struct Input_Data{
    int n;
    struct DVector *x, *y;
};
typedef struct Input_Data Input_Data;

struct DVector Calculate(const struct Input_Data *inputData);

struct DVector Interpolate(const struct Input_Data *inputData);

floating_point power(floating_point x, integer n);
floating_point fabs(floating_point x);
void Jacobi(integer n, floating_point **matrix,
            floating_point *f, floating_point *result);
struct DVector SolveLinSystem(floating_point** matrix,
        floating_point *vector, integer n);

integer input          (Input_Data *inputData);
integer inputTextFile  (char *file, Input_Data *inputData);

void     output          (DVector *result);
integer  outputBinaryFile(char *file, DVector *result);
integer  outputTextFile  (char *file, DVector *result);

#endif
