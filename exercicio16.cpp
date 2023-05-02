#include <iostream>
/*
     Faça um programa que leia a quantidade e a altura dos degraus de uma
    escada. A seguir, o programa deve solicitar a altura do usuário e a altura
    que essa pessoa deseja atingir ao usar a escada. A partir desses dados, o
    programa deve informar quantos degraus a pessoa deve subir para atingir
    a altura desejada. O programa deve informar também a altura máxima
    que essa pessoa pode atingir se subir todos os degraus da escada.
*/

using namespace std;

int main(){
    cout << "Digite a quantidade de degrais: ";
    int quantDegraus;
    cin >> quantDegraus;
    cout << "Digite a altura de cada degrau (em cm): ";
    double altDegraus;
    cin >> altDegraus;

    cout << "Digite a sua altura (em cm): ";
    double alturaUser;
    cin >> alturaUser;
    cout << "Digite a altura que você deseja alcançar (em cm): ";
    double altAlcancar;
    cin >> altAlcancar;

    int quantDegrausMax =  (altAlcancar - alturaUser) / altDegraus;
    double altMax = alturaUser + (quantDegraus * altDegraus);
    if (quantDegrausMax > quantDegraus){
        cout << "Nao eh possível atingir esta altura com essa quantidade de degrais" << endl;
        cout << "A altura maxima que voce pode atingir eh: " << altMax << "cm." << endl;
    } else {
        cout << "Voce precisa subir " << quantDegrausMax << " degrau(is) para atingir altura desejada." << endl;
        cout << "A altura maxima que voce pode atingir eh: " << altMax << "cm." << endl;
    }
    return 0;
}