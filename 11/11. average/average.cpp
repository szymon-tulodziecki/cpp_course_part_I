#include <iostream> 
#include <cmath>

using namespace std;
float average(float n1, float n2, float n3, float n4, float n5, float& AV)
{
    AV = (n1 + n2 + n3 + n4 + n5) / 5;
    return AV;
}
void closest_value (const float a, const  float b, const float c,const  float  d, const  float  e, const  float  AV)
{
float diff_a = abs(AV - a);
float diff_b = abs(AV - b);
float diff_c = abs(AV - c);
float diff_d = abs(AV - d);
float diff_e = abs(AV - e);

float closest = a;
float min_diff = diff_a;

if(diff_b < min_diff)
    {
        closest = b;
        min_diff = diff_b;
    }
if (diff_c < min_diff)
    {
        closest = c;
        min_diff = diff_c;
    }
if (diff_d < min_diff)
    {
        closest = d;
        min_diff = diff_d;
    }
if (diff_e < min_diff)
    {
        closest = e;
        min_diff = diff_e;
    }

    cout << "The closest value to the average is: " << closest << endl;

    
}
int main()
{
    float a, b, c, d , e, AV;

    cout << "Enter 5 values seppared with space: ";
    cin >> a >> b >> c >> d >> e;

    AV = average(a, b, c, d, e, AV);
    
    
    cout << "The average is equal to " << AV << endl;
    closest_value(a, b, c, d, e, AV);
    return 0;
}