#include<iostream>
#include <conio.h>
#include<string.h>


#define maxCadena 500
#define maxPatronabuscar 100

using namespace std;

void FuerzaBruta(char[], char[], int, int);

int main(void)
{
    char Cadena[maxCadena];
    char Patron[maxPatronabuscar];
    int n;
    int m;

    cout << "Ingrese la cadena:";
    cin>>(Cadena);
    n = strlen(Cadena);
    do {
        cout << "\nIngrese el patron a buscar:";
        cin >> Patron;
        m = strlen(Patron);
      
    } while (m > n); 

    
    FuerzaBruta(Cadena, Patron, n, m);   

}


void FuerzaBruta(char cadena[], char patron[], int n, int m)
{
    int i, j, k, cont = 0;
    char temp[100];
    for (i = 0; i <= n; i++)
    {
        for (j = i, k = 0; j < m; j++, k++)
            temp[k] = cadena[i + k];
        temp[k] = '\0';
        if (strcmp(patron, temp) == 0)
        {
            cout << "\nPosicion: " << i;
            cont++;
        }
        m++;
    }
    cout << "\nNo de repeticiones:" << cont << endl;

}