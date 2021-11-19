// Trenton Smith -- 11/18/2021 --  12:59PM 

// Payroll System C++ 

 
 

#include <iostream> 

#include<iomanip> 

#include<string> 

 
 

using namespace std; 

 
 

int main(){ 

     

    //Employee's attributes 

     

    string eName, department;  

    int age; 

    char gender; 

    float days, rate;  

    float tax = 0.125; 

    float salary = 0.00; 

     

    

    cout << "Enter name of employee: "; 

    cin >> eName; 

     

    cout << "Enter employee's gender: "; 

    cin >> gender; 

     

    cout << "Enter name of department: "; 

    cin >> department; 

     

    cout << "Enter number of days worked: "; 

    cin >> days; 

     

    cout << "Enter daily rate: "; 

    cin >> rate; 

     

salary = (days * rate - tax); 

 
 

    //Output 

     

    cout << "Name of employee: "<< eName << ", "; 

     

    cout << "Gender: " << gender << ", "; 

     

    cout << "Department : " << department << ", "; 

     

    cout << "Days Worked: " << days << ", "; 

     

    cout <<  "Daily Rate: " << rate << ", "; 

     

    cout << "Salary: $"  << salary  << ", "; 

     

    cout << "Tax: 12%" << "."; 

     

     

 
 

 
 

     

    return 0; 

} 

 
