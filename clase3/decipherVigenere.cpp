#include <iostream>
#include <vector>

using namespace std;

char cesar(char c, char r);


int main(){

    string clave = "garden";
    string abc = "abcdefghijklmnopqrstuvwxyz";

    vector<string> palabras;
    palabras.push_back("iondvqy");
    palabras.push_back("dzh");
    palabras.push_back("qnty");
    palabras.push_back("klqry");
    palabras.push_back("bvisek");
    palabras.push_back("tyhme");
    palabras.push_back("jerwlf");
    palabras.push_back("zhv");
    palabras.push_back("yeyoaew");
    palabras.push_back("rrbei");
    palabras.push_back("wefze");
    palabras.push_back("fi");
    palabras.push_back("hrgty");
    palabras.push_back("eyg");
    palabras.push_back("unth");
    palabras.push_back("ss");
    palabras.push_back("glc");
    palabras.push_back("wlr");
    palabras.push_back("coegiey");
    palabras.push_back("tydx");
    palabras.push_back("v");
    palabras.push_back("eek");
    palabras.push_back("keik");
    palabras.push_back("hvdvq");
    palabras.push_back("ot");
    palabras.push_back("jhizy");
    palabras.push_back("tf");
    palabras.push_back("pi");
    palabras.push_back("zusk");
    palabras.push_back("vxegnxh");
    palabras.push_back("xugt");
    palabras.push_back("dhr");
    palabras.push_back("fnoloh");
    palabras.push_back("skai");
    palabras.push_back("vironx");
    palabras.push_back("wlnz");
    palabras.push_back("dvdxu");
    palabras.push_back("g");
    palabras.push_back("nvfifyaib");
    palabras.push_back("iaj");
    palabras.push_back("wzop");
    palabras.push_back("pumv");
    palabras.push_back("zlrt");
    palabras.push_back("ik");
    palabras.push_back("zmyr");
    palabras.push_back("cfpi");

    for(auto item:palabras){
        for(int i = 0; i < item.length(); ++i){
            if(i < clave.length())
                cout << cesar(clave[i],item[i]);
            else
                cout << cesar(clave[i-clave.length()+1], item[i]);
        }
        cout << endl;
    }

    return 1;
}

char cesar(char c, char r){
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int rep = c - 97;
    for(int i = 0; i < abc.length(); ++i){
        if(abc[i]+rep < 123)
            abc[i] = abc[i]+rep;
        else
            abc[i] = 97 + abc[i]+rep - 123;
    }

    return abc[r-97];
}
