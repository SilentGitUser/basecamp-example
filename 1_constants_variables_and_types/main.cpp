#include <iostream>

using namespace std;

int iglob;
static int isglob;
const int icglob{123};
const static int icsglob{234};
auto aglob{345};

double dglob;
static double dsglob;
const double dcglob{12.3};
const static double dcsglob{23.4};
auto adglob{34.5};

// The function doesn't work because global variables sent with copy of value
// template <typename T> inline void print_vars(string name, T  var, T * pvar, T & rvar)
// {
//     cout << "Value of " << name << ": " << var << endl;
//     cout << "Address of " << name << ": " << &var << endl;
//     cout << "Value of p" << name << ": " << pvar << endl;
//     cout << "Value of p" << name << "+1: " << pvar+1 << endl;
//     cout << "Address of p" << name << ": " << &pvar << endl;
//     cout << "Value of variable with address p" << name << ": " << *pvar << endl;
//     cout << "Size of " << name << ": " << sizeof(var) << endl;
//     cout << "Size of p" << name << ": " << sizeof(pvar) << endl;
//     cout << "Size of r" << name << ": " << sizeof(rvar) << endl;
//     cout << "Address of r" << name << ": " << &rvar << endl;
//     cout << "Value of r" << name << ": " << rvar << endl;
// }


int main()
{

    int iloc;
    static int isloc;
    const int icloc{654};
    const static int icsloc{876};

    int * piglob = &iglob;
    int * pisglob = &isglob;
    const int * picglob = &icglob;
    const int * picsglob = &icsglob;
    auto *paglob=&aglob;
    

    int &riglob = iglob;
    int &risglob = isglob;
    const int &ricglob = icglob;
    const int &ricsglob = icsglob;    
    auto &raglob=aglob;

    int * piloc = &iloc;
    int * pisloc = &isloc;
    const int * picloc = &icloc;
    const int * picsloc = &icsloc;    

    int &riloc = iloc;
    int &risloc = isloc;
    const int &ricloc = icloc;
    const int &ricsloc = icsloc;    

    double * pdglob = &dglob;
    double * pdsglob = &dsglob;
    const double * pdcglob = &dcglob;
    const double * pdcsglob = &dcsglob;

    double &rdglob = dglob;
    double &rdsglob = dsglob;
    const double &rdcglob = dcglob;
    const double &rdcsglob = dcsglob;    

    cout  << "Hello automotive basecamp!" << endl ;
    cout  << "1_constants_variables_and_type" << endl ;
    cout << "a - auto" << endl;    
    cout << "p - pointer" << endl;
    cout << "r - reference" << endl;
    cout << "d - double" << endl;
    cout << "i - integer" << endl;
    cout << "c - const" << endl;
    cout << "s - static" << endl;
    cout << "glob - global" << endl;
    cout << "loc - local" << endl << endl;

    cout << "---------------------------------------------------------------------" << endl;

    cout << "Value of iglob: " << iglob << endl;
    cout << "Address of iglob: " << &iglob << endl;
    cout << "Value of piglob: " << piglob << endl;
    cout << "Value of piglob+1: " << piglob+1 << endl;
    cout << "Address of piglob: " << &piglob << endl;
    cout << "Value of variable with address piglob: " << *piglob << endl;
    cout << "Size of iglob: " << sizeof(iglob) << endl;
    cout << "Size of piglob: " << sizeof(piglob) << endl;
    cout << "Size of riglob: " << sizeof(riglob) << endl;
    cout << "Address of riglob: " << &riglob << endl;
    cout << "Value of riglob: " << riglob << endl;
    riglob=545;
    cout << "The reference is changed to 545" << endl;
    cout << "Value of iglob: " << iglob << endl;
    cout << "Value of riglob: " << riglob << endl;

    cout << endl;

    cout << "Value of isglob: " << isglob << endl;
    cout << "Address of isglob: " << &isglob << endl;
    cout << "Value of pisglob: " << pisglob << endl;
    cout << "Value of pisglob+1: " << pisglob+1 << endl;
    cout << "Address of pisglob: " << &pisglob << endl;
    cout << "Value of variable with address pisglob: " << *pisglob << endl;
    cout << "Size of isglob: " << sizeof(isglob) << endl;
    cout << "Size of pisglob: " << sizeof(pisglob) << endl;
    cout << "Size of risglob: " << sizeof(risglob) << endl;
    cout << "Address of risglob: " << &risglob << endl;
    cout << "Value of risglob: " << risglob << endl;
    risglob=656;    
    cout << "The reference is changed to 656" << endl;
    cout << "Value of isglob: " << isglob << endl;
    cout << "Value of risglob: " << risglob << endl;

    cout << endl;

     cout << "Value of icglob: " << icglob << endl;
    cout << "Address of icglob: " << &icglob << endl;
    cout << "Value of picglob: " << picglob << endl;
    cout << "Value of picglob+1: " << picglob+1 << endl;
    cout << "Address of picglob: " << &picglob << endl;
    cout << "Value of variable with address picglob: " << *picglob << endl;
    cout << "Size of icglob: " << sizeof(icglob) << endl;
    cout << "Size of picglob: " << sizeof(picglob) << endl;
    cout << "Size of ricglob: " << sizeof(ricglob) << endl;
    cout << "Address of ricglob: " << &ricglob << endl;
    cout << "Value of ricglob: " << ricglob << endl;
    //ricglob=741;
    cout << "The reference can't be changed because it is const" << endl;
    cout << "Value of icglob: " << icglob << endl;
    cout << "Value of ricglob: " << ricglob << endl;

    cout << endl;

    cout << "Value of icsglob: " << icsglob << endl;
    cout << "Address of icsglob: " << &icsglob << endl;
    cout << "Value of picsglob: " << picsglob << endl;
    cout << "Value of picsglob+1: " << picsglob+1 << endl;
    cout << "Address of picsglob: " << &picsglob << endl;
    cout << "Value of variable with address picsglob: " << *picsglob << endl;
    cout << "Size of icsglob: " << sizeof(icsglob) << endl;
    cout << "Size of picsglob: " << sizeof(picsglob) << endl;
    cout << "Size of ricsglob: " << sizeof(ricsglob) << endl;
    cout << "Address of ricsglob: " << &ricsglob << endl;
    cout << "Value of ricsglob: " << ricsglob << endl;
    //ricglob=852;
    cout << "The reference can't be changed because it is const" << endl;
    cout << "Value of icsglob: " << icsglob << endl;
    cout << "Value of ricsglob: " << ricsglob << endl;

    cout << endl;

    cout << "Value of aglob: " << aglob << endl;
    cout << "Address of aglob: " << &aglob << endl;
    cout << "Value of paglob: " << paglob << endl;
    cout << "Value of paglob+1: " << paglob+1 << endl;
    cout << "Address of paglob: " << &paglob << endl;
    cout << "Value of variable with address paglob: " << *paglob << endl;
    cout << "Size of aglob: " << sizeof(aglob) << endl;
    cout << "Size of paglob: " << sizeof(paglob) << endl;
    cout << "Size of raglob: " << sizeof(raglob) << endl;
    cout << "Address of raglob: " << &raglob << endl;
    cout << "Value of raglob: " << raglob << endl;
    cout << "Type of auto variable is - " << typeid(aglob).name() << endl;
    cout << "Type of auto pointer is - " << typeid(paglob).name() << endl;
    cout << "Type of auto reference is - " << typeid(raglob).name() << endl;
    raglob=963;    
    cout << "The reference is changed to 963" << endl;
    cout << "Value of isglob: " << aglob << endl;
    cout << "Value of risglob: " << raglob << endl;

     cout << endl;

    cout << "---------------------------------------------------------------------" << endl;
    cout << "Value of iloc: " << iloc << endl;
    cout << "Address of iloc: " << &iloc << endl;
    cout << "Value of piloc: " << piloc << endl;
    cout << "Value of piloc+1: " << piloc+1 << endl;
    cout << "Address of piloc: " << &piloc << endl;
    cout << "Value of variable with address piloc: " << *piloc << endl;
    cout << "Size of iloc: " << sizeof(iloc) << endl;
    cout << "Size of piloc: " << sizeof(piloc) << endl;
    cout << "Size of riloc: " << sizeof(riloc) << endl;
    cout << "Address of riloc: " << &riloc << endl;
    cout << "Value of riloc: " << riloc << endl;

    cout << endl;

    cout << "Value of isloc: " << isloc << endl;
    cout << "Address of isloc: " << &isloc << endl;
    cout << "Value of pisloc: " << pisloc << endl;
    cout << "Value of pisloc+1: " << pisloc+1 << endl;
    cout << "Address of pisloc: " << &pisloc << endl;
    cout << "Value of variable with address pisloc: " << *pisloc << endl;
    cout << "Size of isloc: " << sizeof(isloc) << endl;
    cout << "Size of pisloc: " << sizeof(pisloc) << endl;
    cout << "Size of risloc: " << sizeof(risloc) << endl;
    cout << "Address of risloc: " << &risloc << endl;
    cout << "Value of risloc: " << risloc << endl;

    cout << endl;

     cout << "Value of icloc: " << icloc << endl;
    cout << "Address of icloc: " << &icloc << endl;
    cout << "Value of picloc: " << picloc << endl;
    cout << "Value of picloc+1: " << picloc+1 << endl;
    cout << "Address of picloc: " << &picloc << endl;
    cout << "Value of variable with address picloc: " << *picloc << endl;
    cout << "Size of icloc: " << sizeof(icloc) << endl;
    cout << "Size of picloc: " << sizeof(picloc) << endl;
    cout << "Size of ricloc: " << sizeof(ricloc) << endl;
    cout << "Address of ricloc: " << &ricloc << endl;
    cout << "Value of ricloc: " << ricloc << endl;

    cout << endl;

    cout << "Value of icsloc: " << icsloc << endl;
    cout << "Address of icsloc: " << &icsloc << endl;
    cout << "Value of picsloc: " << picsloc << endl;
    cout << "Value of picsloc+1: " << picsloc+1 << endl;
    cout << "Address of picsloc: " << &picsloc << endl;
    cout << "Value of variable with address picsloc: " << *picsloc << endl;
    cout << "Size of icsloc: " << sizeof(icsloc) << endl;
    cout << "Size of picsloc: " << sizeof(picsloc) << endl;
    cout << "Size of ricsloc: " << sizeof(ricsloc) << endl;
    cout << "Address of ricsloc: " << &ricsloc << endl;
    cout << "Value of ricsloc: " << ricsloc << endl;

    cout << endl;

    cout << "---------------------------------------------------------------------" << endl;

    cout << "Value of dglob: " << dglob << endl;
    cout << "Address of dglob: " << &dglob << endl;
    cout << "Value of pdglob: " << pdglob << endl;
    cout << "Value of pdglob+1: " << pdglob+1 << endl;
    cout << "Address of pdglob: " << &pdglob << endl;
    cout << "Value of variable with address pdglob: " << *pdglob << endl;
    cout << "Size of dglob: " << sizeof(dglob) << endl;
    cout << "Size of pdglob: " << sizeof(pdglob) << endl;
    cout << "Size of rdglob: " << sizeof(rdglob) << endl;
    cout << "Address of rdglob: " << &rdglob << endl;
    cout << "Value of rdglob: " << rdglob << endl;
    rdglob=545;
    cout << "The reference is changed to 545" << endl;
    cout << "Value of dglob: " << dglob << endl;
    cout << "Value of rdglob: " << rdglob << endl;

    cout << endl;

    cout << "Value of dsglob: " << dsglob << endl;
    cout << "Address of dsglob: " << &dsglob << endl;
    cout << "Value of pdsglob: " << pdsglob << endl;
    cout << "Value of pdsglob+1: " << pdsglob+1 << endl;
    cout << "Address of pdsglob: " << &pdsglob << endl;
    cout << "Value of variable with address pdsglob: " << *pdsglob << endl;
    cout << "Size of dsglob: " << sizeof(dsglob) << endl;
    cout << "Size of pdsglob: " << sizeof(pdsglob) << endl;
    cout << "Size of rdsglob: " << sizeof(rdsglob) << endl;
    cout << "Address of rdsglob: " << &rdsglob << endl;
    cout << "Value of rdsglob: " << rdsglob << endl;

    cout << endl;

     cout << "Value of dcglob: " << dcglob << endl;
    cout << "Address of dcglob: " << &dcglob << endl;
    cout << "Value of pdcglob: " << pdcglob << endl;
    cout << "Value of pdcglob+1: " << pdcglob+1 << endl;
    cout << "Address of pdcglob: " << &pdcglob << endl;
    cout << "Value of variable with address pdcglob: " << *pdcglob << endl;
    cout << "Size of dcglob: " << sizeof(dcglob) << endl;
    cout << "Size of pdcglob: " << sizeof(pdcglob) << endl;
    cout << "Size of rdcglob: " << sizeof(rdcglob) << endl;
    cout << "Address of rdcglob: " << &rdcglob << endl;
    cout << "Value of rdcglob: " << rdcglob << endl;

    cout << endl;

    cout << "Value of dcsglob: " << dcsglob << endl;
    cout << "Address of dcsglob: " << &dcsglob << endl;
    cout << "Value of pdcsglob: " << pdcsglob << endl;
    cout << "Value of pdcsglob+1: " << pdcsglob+1 << endl;
    cout << "Address of pdcsglob: " << &pdcsglob << endl;
    cout << "Value of variable with address pdcsglob: " << *pdcsglob << endl;
    cout << "Size of dcsglob: " << sizeof(dcsglob) << endl;
    cout << "Size of pdcsglob: " << sizeof(pdcsglob) << endl;
    cout << "Size of rdcsglob: " << sizeof(rdcsglob) << endl;
    cout << "Address of rdcsglob: " << &rdcsglob << endl;
    cout << "Value of rdcsglob: " << rdcsglob << endl;

    cout << endl;

    cout << "---------------------------------------------------------------------" << endl;

    // print_vars<int>("iglob", iglob, piglob, riglob);

//     - INT <- FLOAT
// - DOUBLE <- INT
// - INT <- CHAR
// - CHAR <- INT
// - UNSIGNED CHAR <- INT

    float floc{12.34};
    double dloc{12.3456};
    char cloc{'l'};
    unsigned char ucloc{'k'};

    iloc=floc;
    cout << "iloc <- 12.34" << endl << "iloc=" << iloc << endl;
    cout << "-------" << endl;
    dloc=iloc;
    cout << "dloc <- 12" << endl << "dloc=" << dloc << endl;
    cout << "-------" << endl;
    iloc=cloc;
    cout << "iloc <- 'k'" << endl << "iloc=" << iloc << endl;
    cout << "-------" << endl;
    iloc=1000;
    cloc=iloc;
    ucloc=iloc;
    cout << "cloc <- 1000" << endl << "cloc=" << (int)cloc << endl;
    cout << "ucloc <- 1000" << endl << "ucloc=" << (int)ucloc << endl;
    cout << "---------------------------------------------------------------------" << endl << endl;

    unsigned char * puchar{&ucloc};
    cout << "*puchar <- ucloc " << endl << "*puchar=" << int (*puchar) << endl;
    *puchar=*puchar +1;
    cout << "increment *puchar " << endl << "*puchar=" << int (*puchar) << endl;

    cout << endl << "---------------------------------------------------------------------" << endl;

    auto adloc{345.567};

    cout << "Variable adloc= " << adloc << endl;
    cout << "Type of adloc is " << typeid(adloc).name() << endl;

    //     To learn the most common mistakes and know how compilation errors look like try the next:
    // - create two, global and local, variables with the same name;
    // - change a value of a constant;
    // - create a reference without assigning the value;
    // - passing the address of a variable of a specific type to a pointer of a different type;
    // - print a value of nullable pointer;
    // - pass some value (for example, 0, 1, 2 ... whatever) to the pointer;
    // - pass a value to a variable of a different type (for example, pass "some_string" to int variable).

    cout << endl << "---------------------------------------------------------------------" << endl;

    cout << "Global iglob befor definition of local variable = " << iglob << endl;
    int iglob{2378};
    cout << "iglob after definition 'int iglob{2378}' of local variable = " << iglob << endl;
    //the compiler doesn't generate any error. Local variable just shadow the global variable

    //icglob=18;
    //error: assignment of read-only variable ‘icglob’

    //int &riglob_new;
    //ERROR: ‘riglob_new’ declared as reference but not initialized

       // unsigned int * uipointer = &iglob;
    //error: invalid conversion from ‘int*’ to ‘unsigned int*’

    cout << endl << "---------------------------------------------------------------------" << endl;

    //int * npointer{nullptr};
    //There is no compilation error
    // try{
    //    cout << "Value of nullptr pointer = " << *npointer << endl; 
    // }
    // catch (...){
    //     cout << "Error with nullptr pointer" << endl;
    // }
    //ERROR: Segmentation fault

    cout << endl << "---------------------------------------------------------------------" << endl;

    //int * somepointer;

    //somepointer=56;
    //cout << "somepointer value = " << somepointer << ", value from pointer = " << *somepointer << endl; 
    //error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]   
    
    cout << endl << "---------------------------------------------------------------------" << endl;
    
    //iglob="Some string.";
    //ERROR: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

    return 0;
}