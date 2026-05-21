#include <iostream>
#include <iomanip>
 
using namespace std; 

int main() {
 
    float nums[6];
    float mediaPositivo = 0;
    float somaPositivo = 0;
    float contPositivo = 0;
    
    for(int i = 0; i < 6; i++)
    {
        cin >> nums[i];
        if(nums[i] > 0)
        {
            contPositivo++;
            somaPositivo+= nums[i];
        }

    }

    mediaPositivo = somaPositivo / contPositivo;
    cout << contPositivo << " valores positivos" << endl;
    cout << fixed << setprecision(1) << mediaPositivo << endl;
    
    return 0;
        
}

