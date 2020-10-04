#include "report.h"

report::report(): ejection_fraction(), platelets() {}
report::report(int ef, double platelet): ejection_fraction(ef), platelets(platelet) {}

int report::getEjecFraction()
{
    return ejection_fraction;
}
double report::getPlatelets()
{
    return platelets;
}
