#include "OSOSx.h"

OSOSx::OSOSx()
{
    strcpy(_osx_titulo,"OS(OPERATING SYSTEM)");
    strcpy(_osx_area_trabajo,"NO HAY NADA EN EL AREA DE TRABAJO.");
    strcpy(_osx_estado,"OS NO HA SIDO ACTIVADO TODAVIA.");
}

OSOSx::~OSOSx()
{
    //dtor
}
void OSOSx::PintarOsosx(){
    //DIBUJA LA BARRA DE TITULO
    DibujarSimbolo('|',80,true);
    DibujarSimbolo('|',1);
    CentrarTexto(_osx_titulo);
    DibujarSimbolo('|',1,true);
    DibujarSimbolo('|',80,true);

    //DIBUJAMOS EL AREA DE TRABAJO
    for(int e=0;e<10;e++){
        DibujarSimbolo('|',1);
        DibujarSimbolo('|',78);
        DibujarSimbolo('|',1,true);
        //CUANDO LLEGAMOS A LA FILA 5 ESCRIBIMOS
        //EL CONTENIDO DEL AREA DE TRABAJO
        if(e==5){
            DibujarSimbolo('|',1);
            CentrarTexto(_osx_area_trabajo);
            DibujarSimbolo('|',1,true);
        }
    }

    //DIBUJAMOS LA BARRA DE ESTADO
    DibujarSimbolo('|',80,true);
    DibujarSimbolo('|',1);
    CentrarTexto(_osx_estado);
    DibujarSimbolo('|',1,true);
    DibujarSimbolo('|',80,true);
}

void OSOSx::DibujarSimbolo(char _simbolo,int _limite,bool _saltarlinea){
    //DIBUJAMOS LA BARRA DE TITULO
    for(int e=0;e<_limite;e++)
    {
        cout << _simbolo;
    }
    if(_saltarlinea)
    {
        cout << endl;
    }
}

void OSOSx::CentrarTexto(char*_ptexto){
    int k,n,r;
    n = strlen(_ptexto);
    k = (78-n)/2;
    r = (78-n)%2;
    for(int i=0;i<k;i++)
    {
        cout << ' ';
    }
    cout << _ptexto;

    for(int i=0;i<k+r;i++)
    {
        cout << ' ';
    }
}
