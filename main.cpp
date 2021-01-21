#include <iostream>

using namespace std;

void ordernar(int a[],int n);

int main()
{

    int arreglo1[5]= {3,2,1,5,4};

    for(int i=0; i<5; i++)
    {
        cout<<"|"<<arreglo1[i]<<"|";
    }

    cout<<endl;
    ordernar(arreglo1,5);

    for(int i=0; i<5; i++)
    {
        cout<<"|"<<arreglo1[i]<<"|";
    }

    return 0;
}




void ordernar(int a[],int n)
{
    int i,j,aux,min;

    for (i=0; i<5; i++)
    {
        min = i;
        for(j=i+1; j<5 ; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }

        }
        aux=a[i];
        a[i]= a[min];
        a[min]= aux;
    }


}
