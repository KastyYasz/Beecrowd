#include <iostream>


using namespace std;


int main()
{

    int n , x; // n = quantidade de titans, x = tamanho dos muros;
    int p = 0, m = 0 , g = 0;
    int num1, num2 , num3;
    int DanoTotal = 0;
    int novoMuro = 0;
    cin >> n >> x;

    string Tamanhotitans; // le quais serão os titans P, M ,G (quantidade p, m , g)
    cin >> Tamanhotitans;
    for(int i = 0; i < n; i ++)
    {
        
        if (Tamanhotitans[i] == 'P') p++;
        else if (Tamanhotitans[i] == 'M') m++;
        else if (Tamanhotitans[i] == 'G') g++;
    }
    //Na terceira linha seguem 3 inteiros, p, m e g, 
    //que representam o tamanho de um titã pequeno, 
    //médio e grande respectivamente.

    cin >> num1;
    cin >> num2;
    cin >> num3;

    DanoTotal = (num1 * p) + (num2 * m) + (num3 * g);

    

    int cont = 1;

while (x <= DanoTotal) 
{
    x *= 2;
    cont++;
}

    cout << cont << endl;

    return 0;
}



