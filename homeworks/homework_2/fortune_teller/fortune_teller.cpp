#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<array>

using std::cout;
using std::cin;
using std::endl;

int main(){
    std::string name, adjective, birth_season;
    std::vector<std::string> adjectives;

    const std::map<std::string, std::string> noun_map = {
    {"spring", "STL guru"},
    {"summer", "C++ expert"},
    {"autumn", "coding beast"},
    {"winter", "software design hero"}}; 
    
    std::array<std::string, 3> ending_phrases{"eats UB for breakfast","finds errors quicker than the compiler","is not afraid of C++ error messages"};

    cout << "Welcome to the fortune teller program!" << endl;
    cout << "Please enter your name:" << endl;
    cin >> name;
    cout << "Please enter the time of year when you were born:\n(pick from 'spring', 'summer', 'autumn', 'winter')" << endl;
    cin >> birth_season;
    cout << "Please enter an adjective:" << endl;
    cin >> adjective;
    adjectives.push_back(adjective);
    cout << "Please enter another adjective:" << endl;
    cin >> adjective;
    adjectives.push_back(adjective);

    cout << name << ", the " << adjectives.at(name.size() % adjectives.size()) << " " << noun_map.at(birth_season) 
    << " that " << ending_phrases.at( name.size() % ending_phrases.size()) << endl;
    return 0;
}