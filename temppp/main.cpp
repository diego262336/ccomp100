#include <iostream>
#include <vector>
using namespace std;

template < class T> class Stack ;
template < class T>
Stack <T> operator +( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result = s1;
    for ( unsigned i = 0; i < s1. items . size (); ++i) {
        result.items.push_back(s2.items[i]);
    }
    return result ;
}

template < class T>
Stack <T> operator -( const Stack <T> &s1 , const Stack <T> &s2)
{
    Stack <T> result;
    bool t;
    for ( unsigned i = 0; i < s1.items.size (); ++i) {
        t=false;
        for ( unsigned j = 0; j < s2.items.size (); ++j){
            if(s1.items[i]==s2.items[j]){
                t=true;
            }
        }
    T v = s1.items[i];
    //s1.items.pop_back();

    if(t==false)
        result.items.push_back(v);
    ////
    }
    return result;
}
template < class T >
ostream& operator << (ostream& os ,const Stack <T>& z ){

    for(unsigned i=0;i<z.items.size (); i++ )
    {
        os<< z.items[i] ;
    }
    return os;

}

template < class T>
class Stack {
    friend Stack <T> operator +<>( const Stack <T> &s1 , const Stack <T>& s2);
    friend Stack <T> operator -<>( const Stack <T> &s1 , const Stack <T>& s2);
    friend ostream& operator << <>(ostream& os ,const Stack <T>& z);
    vector <T> items ;
public :
    bool empty () const { return items . empty () ;}
    void push ( const T & item ) { items . push_back ( item );}
    T pop () {
        T last = items . back ();
        items . pop_back ();
        return last ;
    }
};

int main()
{
    Stack <int > a, b;
    a. push (1) ;
    a. push (2) ;
    b. push (1) ;
    b. push (4) ;
    Stack <int > c = a + b;
    cout<<c;
    cout<<endl;
    Stack <int > d = a - b;
    cout<<d;


}
