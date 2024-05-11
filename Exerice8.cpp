#include <iostream>
using namespace std ;
main()
{ 
//1.
  
if (a<b) cout << "ascendant"
else cout << "non ascendant" ;

  //Il manque le point virgule => if (a<b) cout << "ascendant";
  
//2.
  
int n ;
...
switch (2*n+1)
{ case 1 : cout << "petit" ;
case n : cout << "moyen" ;
}

  //Le case doit être une constante, ce n'est pas le cas de n
  
//3.
  
const int LIMITE=100
int n ;
...
switch (n)
{ case LIMITE-1 : cout << "un peu moins" ;
case LIMITE : cout << "juste" ;
case LIMITE+1 : cout << "un peu plus" ;
}

    //Aucune erreur
}
