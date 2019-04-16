#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float hasil;
    int pindah,b=0,angka1,angka2;
    char in[100], z='\0', bil1[10], bil2[50];

    cout<<"Input : ";
    cin>>in;
    cout<<endl;

    for(int i=0; i<strlen(in); i++)
    {
        if(in[i]=='+')
        {
            z = '+';
            b = i;
        }
        else if(in[i]=='-')
        {
            z = '-';
            b = i;
        }
        else if(in[i]=='/')
        {
            z = '/';
            b = i;
        }
        else if(in[i]=='*')
        {
            z = '*';
            b = i;
        }
    }
    if(z=='\0')
    {
        cout << "Operator tidak dikenali !";
        return 0;
    }
    pindah = strlen(in);
    for(int i=0; i<=b; i++)
    {
        if(i==b)
        {
            bil1[i] = '\0';
        }
        else
        {
            bil1[i] = in[i];
        }
    }
    int j=0;
    for(int i=b+1; i<=pindah; i++)
    {
        if(i==pindah)
        {
            bil2[j] = '\0';
        }
        else
        {
            bil2[j] = in[i];
            j++;
        }
    }
    angka1 = atoi(bil1);
    angka2 = atoi(bil2);


    if(z=='+')
    {
        hasil = angka1 + angka2;
    }
    else if(z=='-')
    {
        hasil = angka1 - angka2;
    }
    else if(z=='*')
    {
        hasil = angka1 * angka2;
    }
    else if(z=='/')
    {
        hasil = (float)angka1 / angka2;
    }

    cout << "Angka 1 = "<<angka1;
    cout << "\tAngka 2 = "<<angka2<<endl;
    cout << "Operasi = "<<z;
    cout << "\tHasil   = "<<hasil<<endl;
}
