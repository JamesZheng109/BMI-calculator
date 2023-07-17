#include <iostream>
float metricBMI()
{
    float m,kg,output;
    std::cout<<"Input a height in meters (number only): ";
    std::cin>>m;
    std::cout<<"Input a weight in kilograms (number only):";
    std::cin>>kg;
    output=kg/(m*m);
    return output;
}
float standardBMI()
{
    float in,lb,output;
    std::cout<<"Input a height in inches (number only): ";
    std::cin>>in;
    std::cout<<"Input a weight in pound (number only):";
    std::cin>>lb;
    output=(lb/(in*in))*703;
    return output;
}
int main()
{
    float bmi;
    std::string verdic,measurements;
    std::cout<<"Choose metric or standard: ";
    std::cin>>measurements;
    if (measurements=="metric")
        bmi=metricBMI();
    else if (measurements=="standard")
        bmi=standardBMI();
    if (bmi<18.5)
        verdic="underweight.";
    else if (bmi>=18.5 & bmi<=24.9)
        verdic="at optimal range.";
    else if (bmi>=25 & bmi<=29.9)
        verdic="overweight.";
    else if (bmi>=30 & bmi<=34.9)
        verdic="at class I obesity.";
    else if (bmi>=35 & bmi<=39.9)
        verdic="at class II obesity.";
    else if (bmi>=40)
        verdic="at class III obesity.";
    std::cout<<"BMI:";
    printf("%.2f",bmi);
    std::cout<<". You are "<<verdic<<std::endl;
    return 0;
}