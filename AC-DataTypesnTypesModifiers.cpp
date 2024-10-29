#include<iostream>

using namespace std;

main()
{

    char c;
    cout<<"Size of Char is :"<<sizeof(c)<<"\n";
    bool b;
    cout<<"Size of Bool is :"<<sizeof(b)<<"\n";
    int i;
    cout<<"Size of Int is :"<<sizeof(i)<<"\n";
    float f;
    cout<<"Size of float is :"<<sizeof(f)<<"\n";
    double d;
    cout<<"Size of double is :"<<sizeof(d)<<"\n";

    //DT Modifiers
    /*Short , Long , Signed , unsigned*/
    short  s;    //short or Short int is same 
    cout<<"Size of short is :"<<sizeof(s)<<"\n";
    long l;     //long or long int is same
    cout<<"Size of Long is :"<<sizeof(l)<<"\n";

    signed  int sii;
    cout<<"Size of Signed Int is :"<<sizeof(sii)<<"\n";
    unsigned int usi;
    cout<<"Size of UnSigned Int is :"<<sizeof(usi)<<"\n";


    //Extra 
    long long ll;
    cout<<"Size of Long Long is :"<<sizeof(ll)<<"\n";
    long double ld;
    cout<<"Size of Long Double is :"<<sizeof(ld)<<"\n";

    char ca[1];
    cout<<"Size of char array is :"<<sizeof(ca[2])<<"\n";
    int ia[1];
    cout<<"Size of Int array is :"<<sizeof(ia[2])<<"\n";

    string st;
    cout<<"Size of String is :"<<sizeof(st)<<"\n";

    //char a[1];
    cout<<"Size of Ali is :"<<sizeof("Ali")<<"\n";
    

}
