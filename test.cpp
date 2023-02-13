#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


int main(){
    uint i = 4294967200;

    while(i){
        i++;
        std::cout << i << "\n";
    }
}








// int main(){
//     std::string fname = "log.csv";

//     std::vector<std::vector<std::string>> content;
//     std::vector<std::string> row;
//     std::string line, word;

//     std::fstream file (fname, std::ios::in);
//     if(file.is_open()){
//         while(getline(file, line)){
//             row.clear();
//             std::stringstream str(line);

//             while(getline(str, word, ',')){
//                 row.push_back(word);
//             }

//             content.push_back(row);   
//         }
        
//     }
//     else{
//         std::cout << "Could not open file\n";
//     }

//     int sum = 0;

//     for(int i=0;i<content.size();i++){
//         for(int j=0;j<content[i].size();j++){
//             sum += stoi(content[i][j]);
//         }
//     }

//     int average = sum / content.size();

//     std::cout << average << "\n";

//     return 0;
// }