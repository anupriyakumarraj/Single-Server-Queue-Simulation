// Single Server queue simulation 
#include <stdio.h> 
#include <math.h> 
#define seed1=373135028, seed2 431918286, a=16807, b=214748347;
{
//Arrival Time Calculation
    float ArrivalTime()
{
        float u =  float seed1 / b;
        arrp = double log(u) * (-1 * 200);
        arr = arr + arrp;
        seed1 = (a*seed1) % b;
        return(arr);
 //Service time calculation

    float ServiceTime()
        float v = float seed2 / b;
        servp = double log(v) * (-1 * 100);
        serv = serv + servp;
        seed2 = (a*seed2) % b;
        return(serv);
 
//Waiting time for the customer
    float WaitingTime()
        waitp = max(0, waitp + servp - arrp);
        wait = wait + waitp;
        return (wait);  
 
//calculating the m, Sm, Am, Wm and Um values
    float simulation()
        int temp = int m;
        while m > 0:
           ArrivalTime();
           ServiceTime();
           WaitingTime();
           m = m - 1;
        m = temp;
        Sm = serv / m;
        Am = arr / m;
        Wm = w / m;
        Um = Sm / Am;
 
        # Printing values of the m, Sm, Am, Wm and Um
        printf("%d \t %f \t %f \t %f\t %f" % (m, Sm, Am, Wm, Um));
 
//main program

   void main()
{
double arr = 0, arrp = 0, serv = 0, servp = 0, wait = 0, waitp=0; 

for (int exp=1; exp<8;exp++)
{
int m = pow(10,i);
simulation(m);
printf("%d \t %f \t %f \t %f\t %f" % (m, Sm, Am, Wm, Um));
arr = 0; arrp = 0, serv = 0, servp = 0, wait = 0, waitp=0;
}
