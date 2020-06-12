#include "payroll.h"
//Function gross_pay returns the product of hours and rate.  The function pays
//straight time, there is not overtime.

const double FICA_TAX_RATE = .062;
const double OT_MULTIPLIER = 1.5;

double get_fica_tax_total(double gross_pay)
{
    return gross_pay * FICA_TAX_RATE;
}


double get_regular_pay(int hours, double rate)
{
    double regular_pay{0};
    if(hours > 0)
    {
        if(hours > 40)
        {
            hours = 40;
        }
        regular_pay = hours * rate;
    }
    return regular_pay;
}

double get_ot_pay(int hours, double rate)
{
    double overtime_pay{0};

    if(hours > 40)
    {
        overtime_pay = (hours - 40) * OT_MULTIPLIER * rate;
    }
    return overtime_pay;
}
/*
void display_pay(int hours, double rate)
{
    double regular_pay{0}, overtime_pay{0}, get_fica_tax_total{0}, gross_pay{0}, net_pay{0};
    regular_pay = get_regular_pay(hours, rate); 
    overtime_pay = get_ot_pay(hours, rate);
    get_fica_tax_total = get_fica_tax_total()
    gross_pay = regular_pay + overtime_pay; 
    get_fica_tax_total = get_fica_tax_total(gross_pay);
    net_pay = regular_pay + overtime_pay - get_fica_tax_total;


    cout<<std::fixed<<std::setprecision(2);
    cout<<"Regular Pay: "<<regular_pay<< "\n";
    cout<<"Overtime pay: "<<overtime_pay<< "\n";
    cout<<"Gross pay: "<<gross_pay<< "\n";
    cout<<"FICA deduction: "<<get_fica_tax_total<< "\n";
    
    }
    */