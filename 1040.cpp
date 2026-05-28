#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1,n2,n3,n4;
    float ReMedia = 0;
    float NotaExame = 0;

    cin >> n1 >> n2 >> n3 >> n4;

    float media = ((n1*2) + (n2*3) + (n3*4) + (n4*1)) / (2 + 3 + 4 + 1);

    cout << fixed << setprecision(1);

    cout << "Media: " << media << endl;

    if(media >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    } 
    else if(media >= 5.0 && media <= 6.9)
    {
        cout << "Aluno em exame." << endl;

        cin >> NotaExame;

        cout << "Nota do exame: " << NotaExame << endl;

        ReMedia = (media + NotaExame) / 2;

        if(ReMedia >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << ReMedia << endl;
    }
    else if(media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}