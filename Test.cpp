/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
int FormeazaTriungi (float x,float y,float z)
{
    if((x>0) && (y>0) && (z>0) && (z<y+x) && (x<y+z) && (y<z+x))
    return 1;
    else return 0;
}
int main()
{
    float a,b,c;
    cout<<"Dati Lungimile";
    cin>> a >> b >> c;
    if(FormeazaTriungi (a,b,c))
{ int echi,isos,drept;
    if(a==b && b==c) echi=1;
    else echi=0;
    if(a==b || b==c || c==a) isos=1;
    else isos=0;
    if((a*a==(b*b+c*c)) || (b*b==(a*a+c*c)) || (c*c==(a*a+b*b))) drept=1;
    else drept=0;
    if(echi) cout << "E echilateral" << endl;
    if(isos) cout << "E isoscel" << endl;
    if(drept) cout << "E dreptunghic" << endl;
    if(!echi && !isos && !drept) cout << "E oarecare";
}
else cout << "Nu e triunghi";
    return 0;
}