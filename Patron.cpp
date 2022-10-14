#include<iostream>
#include <conio.h>
#include<string.h>

#define maxTexto 500
#define maxPatron 100

using namespace std;

void FuerzaBruta(char[], char[], int, int);

int main(void)
{
    char Texto[maxTexto];
    char Patron[maxPatron];
    int n, m;

    cout << "Ingrese la cadena:";
    cin>>(Texto);
    n = strlen(Texto);
    do {
        cout << "\nIngrese el patron a buscar:";
        cin >> Patron;
        m = strlen(Patron);
      
    } while (m > n); 
    
    FuerzaBruta(Texto, Patron, n, m);   
}


void FuerzaBruta(char texto[], char patron[], int n, int m)
{
    int i, j, k, cont = 0;
    char temp[100];

        for (i = 0; i <= n; i++)
    {
            for (j = i, k = 0; j < m; j++, k++)

            temp[k] = texto[i + k];
            temp[k] = '\0';
            if (strcmp(patron, temp) == 0)
        {
            cout << "Posicion: " << i << "\n";
            cont++;
        }
        m++;
    }
    cout << "\nNo. de repeticiones:" << cont << endl;

}