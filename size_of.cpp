#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    float arreglo[20];
    cout<<"El numero de bytes en el Arreglo es: "<<sizeof(arreglo);

    cout<<"\nChar         :"<<sizeof(char);
    cout<<"\nshort        :"<<sizeof(short);
    cout<<"\nint          :"<<sizeof(int);
    cout<<"\nlong         :"<<sizeof(long);
    cout<<"\nfloat        :"<<sizeof(float);
    cout<<"\ndouble       :"<<sizeof(double);
    cout<<"\nlong double  :"<<sizeof(long double);
    cout<<"\n----------------------------------------------------";
    printf("\nEl numero de bytes en el Arreglo es: %d\n",sizeof(arreglo));
    printf("\nChar        :%d\n",sizeof(char));
    printf("short       :%d\n",sizeof(short));
    printf("int         :%d\n",sizeof(int));
    printf("long        :%d\n",sizeof(long));
    printf("float       :%d\n",sizeof(float));
    printf("double      :%d\n",sizeof(double));
    printf("long double :%d\n",sizeof(long double));
    return 0;
}