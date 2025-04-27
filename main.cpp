#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double N1, N2, N3, N4, peso1=2, peso2=3, peso3=4, peso4=1,
    soma, media, media2, exame;

    cin >> N1;
    cin >> N2;
    cin >> N3;
    cin >> N4;

    soma = N1 * peso1 + N2 * peso2 + N3 * peso3 + N4 * peso4;
    media = soma/10;

    cout << "Media: " << fixed << setprecision(1) << media << endl;

    if (media >= 7.0){
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if (media >= 5.0 && media <= 6.9){
        cout << "Aluno em exame." << endl;
        cin >> exame;
        cout << "Nota do exame: " << exame << endl;

         media2 = (media + exame) /2;

     if (media2 >= 5.0) {
        cout << "Aluno aprovado." << endl;
     } else {
        cout << "Aluno reprovado." << endl;
     }
        cout << "Media final: " << fixed << setprecision(1) << media2 << endl;
     }

    return 0;
}
