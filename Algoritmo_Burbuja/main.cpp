#include <iostream>

using namespace std;

#define tam 50

void ingresar (int a[], int n);

void ordenar (int a[], int n);

void imprimir (int a[], int n);



int main()
{

    int arreglo1[tam];

    int n;
    cout<<"Ingresar el tamaño del arreglo:";
    cin>>n;
    ingresar(arreglo1,n);
    cout<<endl;
    imprimir(arreglo1,n);
    cout<<endl;
    ordenar(arreglo1,n);
    cout<<endl;
    imprimir(arreglo1,n);

    return 0;
}







void ingresar (int a[], int n)
{
    int i;

    for (i=0 ; i<n ; i++)
    {
        cout<<"Ingresar los elementos al arreglo:"<<i+1<<endl;
        cin>>a[i];
    }

}

void ordenar (int a[], int n)
{
    int aux;
    for (int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;

            }

        }
    }


}


void imprimir(int a[], int n)
{
    int i;
    for (i=0 ; i<n; i++)
    {
        cout<<"|"<<a[i]<<"|";
    }

}






