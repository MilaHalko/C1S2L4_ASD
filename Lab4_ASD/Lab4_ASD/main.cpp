#include "allLibs.hpp"
#include "classList.hpp"

int main() {
    
    List words;
    string str = " dog, bra, canoe, claim, furniture, deck, cola, fashion, bike, sound, money, opportunity";
    
    while (!str.empty()) {
        
        int pos = 0;
        
        while (isalpha(str[pos])) {
            pos++;
        }
        if (pos == 0) {
            str.erase(0,1);
        }
        else {
            string word = str.substr(0, pos);
            words.Push(word);
            str.erase(0, pos);
        }
    }
    words.Print();
    
    return 0;
}
