#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int casos_teste;
    
    cin >> casos_teste;
    cin.ignore();

    //loop principal
    while(casos_teste--)
    {


        //texto de entrada
        string linha;
        //entrada do texto
        getline(cin, linha);

        //Primeira passada: deslocar as letras 3 posicoes a direita 
        for(char &c: linha){
            if(isalpha(c))
            {
                c +=3;
            }
        }

        //Inveter as linhas
        reverse(linha.begin(), linha.end());


        // passada pela metade e deslocar -1 a esquerda
        int metade = linha.size()/2;
        for(size_t i = metade; i < linha.size(); i++)
        {
            linha[i] -= 1;
        }

        //
        cout << linha << endl;
    }

    return (0);
}