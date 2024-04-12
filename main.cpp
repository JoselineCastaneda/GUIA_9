#include <iostream>

#include "OSWindows.h"
#include "OSLINUX.h"
#include "OSOSx.h"

using namespace std;

int main()
{
    //CREAMOS UN SKIN TIPO WINDOWS
    ///WINDOWS.
    OSWindows _win;
    _win.PintarWindow();
    cout << "\n";
    cout << "\n";
    ///LINUX.
    OSLinux _lin;
    _lin.PintarLinux();
    cout << "\n";
    cout << "\n";
    ///OSOSX
    OSOSx _osx;
    _osx.PintarOsosx();
    return 0;
}

