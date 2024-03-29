/* The content of this file was generated using the C profile of libCellML 0.2.0. */

#include "model.h"

#include <math.h>
#include <stdlib.h>

const char VERSION[] = "0.1.0";
const char LIBCELLML_VERSION[] = "0.2.0";

const size_t STATE_COUNT = 1;
const size_t VARIABLE_COUNT = 1;

const VariableInfo VOI_INFO = {"t", "millisecond", "distance_finder"};

const VariableInfo STATE_INFO[] = {
    {"x", "league", "distance_finder"}
};

const VariableInfoWithType VARIABLE_INFO[] = {
    {"a", "dimensionless", "distance_finder", CONSTANT}
};

double * createStatesArray()
{
    return (double *) malloc(1*sizeof(double));
}

double * createVariablesArray()
{
    return (double *) malloc(1*sizeof(double));
}

void deleteArray(double *array)
{
    free(array);
}

void initializeStatesAndConstants(double *states, double *variables)
{
    states[0] = 5.0;
    variables[0] = 1.0;
}

void computeComputedConstants(double *variables)
{
}

void computeRates(double voi, double *states, double *rates, double *variables)
{
    rates[0] = variables[0]*states[0]+2.0;
}

void computeVariables(double voi, double *states, double *rates, double *variables)
{
}
