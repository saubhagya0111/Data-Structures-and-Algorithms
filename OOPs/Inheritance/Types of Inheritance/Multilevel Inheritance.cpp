#include <iostream>
using namespace std;
//Multilevel inheritance has been implemented in the said code
//Principle class is the base class for rate
//Rate class is the base class for Time
//Time class is the base class for Interest
class principle
{
public:
    int princi;
    void input_principle();
};
class rate : public principle
{
public:
    int r;
    void input_rate();
    int output_principle()
    {
        return princi;
    }
};
void rate::input_rate()
{
    cout << "Enter the rate of interest\n";
    cin >> r;
}
void principle::input_principle()
{
    cout << "Enter the value of principle\n";
    cin >> princi;
}
class time : public rate
{
public:
    int output_rate()
    {
        return r;
    }
    int t;
    void input_time()
    {
        cout << "Enter the time\n";
        cin >> t;
    }
    int output_time()
    {
        return t;
    }
};
class interest : public time
{
public:
    int t1 = output_time();
    int p1 = output_principle();
    int r1 = output_rate();
    float inter = t1 * p1 * r1 * 0.01;
    void output_interest()
    {
        // return inter;
        cout << "Value of Interest==" << inter << endl;
    }
};
int main()
{
    principle p;
    p.input_principle();
    time t;
    t.input_time();
    rate r;
    r.input_rate();
    interest i;
    i.output_interest();
}
