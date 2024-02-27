#include <map>
#include <iostream>

int main(){
    std::map<char, bool> symbolTable;
    symbolTable[' '] = false;
	symbolTable['a'] = false;
	symbolTable['d'] = false;
	symbolTable['w'] = false;
	symbolTable['s'] = false;

    for (auto it = symbolTable.begin(); it != symbolTable.end(); it++)
    {
        std::cout << it->first    // string (key)
                << ':'
                << it->second   // string's value 
                << std::endl;
    }
    return 0;
}
