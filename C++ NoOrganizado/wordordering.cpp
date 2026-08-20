#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int n;
int ranki[256];//Ranking de las letras segun ASCII
//256 alcanza
bool compper(const string& a, const string& b)//comparador personalizado
{
    int minlon= min(a.length() , b.length());// longitud de la palabra
    //si la palabra es hol y hols (ejemplo) pasa al ultimo y ahi se ve cual
    for (int i=0; i<minlon;i++)//compara letra por letra de cada cadena
        {
        if (ranki[a[i]]!= ranki[b[i]])//si la letra es diferente entra al if
        {
            return ranki[a[i]] < ranki[b[i]]; //returna este valor, si es falso, a va primero b
            // si tomamos que a[i]=a, va a ser rank[a]=1 si tomamos el alfabeto normal
            //y lo compara con b[i]=c (tomamos que es c b[i]), si es el alfabeto normal
            // rank[c]=3 entonces ranki[a[i]]<ranki[b[i]], por lo que a va primero que b
        }
    }
    return a.length() < b.length();// si la palabra son hol y hols
    // returna que la longitud de una es menor si es verdad, va primero a, si es falso va primero b;
}


int main() {
     ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    string alf;// alfabeto permutado
    cin >> alf;
for (int i=0; i<26;i++){
    char mini = alf [i];//minusculas
    char mayu= toupper(mini);//mayusculas
    ranki [mini]=i;//con el valor ASCII se le dara la i como posicion
    // por ejemplo a es 97, entonces en ranki[67]=1 si a va de primero
    // lo que nos dira en que posicion va
    ranki [mayu]=i+26;// lo mismo pero con las mayusculas
}
    cin >> n;
    vector <string> palabra (n);
    for(int i=0; i<n;i++){
        cin >> palabra[i];
//ingresamos las palabras
    }
sort(palabra.begin(), palabra.end(), compper);//usamos sort con el comparador que hicimos
for (int i=0; i<n; i++){
    cout << palabra[i]<<"\n";
}
return 0;
}
