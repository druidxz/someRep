#include <iostream>

struct patron {
    std::string name;
    double donationAmount; 
};


int main()
{
    std::cout << "number of patrons: ";
    int amountOfPatrons;
    std::cin >> amountOfPatrons;
    std::cin.get();
    
    // =========== get memory for array of structs ========
    // =========== and filling data =======================
    patron ** patronsArr = new patron *[amountOfPatrons];
    for (int i = 0; i < amountOfPatrons; ++i) {
        patronsArr[i] = new patron;
        std::cout << "enter a name of the patron #" << i+1 << " : ";
        getline(std::cin, patronsArr[i]->name);
        std::cout << "enter an amount of donation of the patron #" << i+1 << " : ";
        std::cin >> patronsArr[i]->donationAmount;
        std::cin.get();
        std::cout << std::endl;
    }
        
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    
    
    // ===== freemem ======
    for (int i = 0; i < amountOfPatrons; ++i)
        delete patronsArr[i];
    delete [] patronsArr;
    // ~~~~~~~~~~~~~~~~~~~~
    return 0;
}
