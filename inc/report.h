#ifndef REPORT_H_INCLUDED
#define REPORT_H_INCLUDED

class report
{
    int ejection_fraction;
    double platelets;

public:

    report();
    report(int, double);

    int getEjecFraction();
    double getPlatelets();

};
#endif // REPORT_H_INCLUDED
