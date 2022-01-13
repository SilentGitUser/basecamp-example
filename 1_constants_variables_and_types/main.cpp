#include <iostream>

bool bglob{true};
bool * pbglob{&bglob};
bool & rbglob{bglob};
static bool sbglob{false};
const bool cbglob{false};
const bool *pcbglob{&cbglob};
const bool &rcbglob{cbglob};
const static bool csbglob{true};

char cglob{50};
char * pcglob{&cglob};
char & rcglob{cglob};
static char scglob{'t'};
const char ccglob{true};
const char *pccglob{&ccglob};
const char &rccglob{ccglob};
const static char cscglob{'y'};

int iglob{123};
int * piglob{&iglob};
int & riglob{iglob};
static int siglob{234};
const int ciglob{345};
const int *pciglob{&ciglob};
const int &rciglob{iglob};
const static int csiglob{567};

float fglob{1.23};
float* pfglob{&fglob};
float & rfglob{fglob};
static float sfglob{12.3};
const float cfglob{2.34};
const float * pcfglob{&cfglob};
const float & rcfglob{fglob};
const static float csfglob{23.4};

double dglob{3.45};
double* pdglob{&dglob};
double & rdglob{dglob};
static double sdglob{34.5};
const double cdglob{4.56};
const double * pcdglob{&cdglob};
const double & rcdglob{dglob};
const static double csdglob{45.6};

long lglob{123456789};
long* plglob{&lglob};
long & rlglob{lglob};
static long slglob{987654321};
const long clglob{456789123};
const long * pclglob{&clglob};
const long & rclglob{lglob};
const static long cslglob{123789465};

template<typename T>
void print_variable_info(const T& var, const std::string& name = "") {
  std::string prefix = (name.empty()) ? "" : ("[" + name + "] ");

  std::cout << "\n";
  std::cout << prefix << "Value: " << var << "\n";
  std::cout << prefix << "Address: " << &var << "\n"; // Q: why it won't print address of var with type "char"? what is needed to do?
  std::cout << prefix << "Type: " << typeid(var).name() << "\n";
  std::cout << prefix << "Sizeof: " << sizeof(var) << std::endl;
}

int main()
{

  bool bloc{true};
  bool* pbloc{&bloc};
  bool & rbloc{bloc};
  static bool sbloc{false};
  const bool cbloc{true};
  const bool *pcbloc{&cbloc};
  const bool &rcbloc{cbloc};
  const static bool csbloc{true};

  char cloc{50};
  char* pcloc{&cloc};
  char & rcloc{cloc};
  static char scloc{'t'};
  const char ccloc{true};
  const char *pccloc{&ccloc};
  const char &rccloc{ccloc};
  const static char cscloc{'y'};

  int iloc{123};
  int* piloc{&iloc};
  int & riloc{iloc};
  static int siloc{234};
  const int ciloc{345};
  const int *pciloc{&ciloc};
  const int &rciloc{iloc};
  const static int csiloc{567};

  float floc{1.23};
  float* pfloc{&floc};
  float & rfloc{floc};
  static float sfloc{12.3};
  const float cfloc{2.34};
  const float * pcfloc{&cfloc};
  const float & rcfloc{floc};
  const static float csfloc{23.4};

  double dloc{3.45};
  double* pdloc{&dloc};
  double & rdloc{dloc};
  static double sdloc{34.5};
  const double cdloc{4.56};
  const double * pcdloc{&cdloc};
  const double & rcdloc{dloc};
  const static double csdloc{45.6};

  long lloc{123456789};
  long* plloc{&lloc};
  long & rlloc{lloc};
  static long slloc{987654321};
  const long clloc{456789123};
  const long * pclloc{&clloc};
  const long & rclloc{lloc};
  const static long cslloc{123789465};
      
  print_variable_info<bool>(bglob,"bglob, bool global var");
  print_variable_info<bool*>(pbglob,"pbglob, bool global pointer to bglob");
  print_variable_info<bool>(rbglob,"rbglob, bool global ref to bglob");

  print_variable_info< bool>(cbglob,"cbglob, bool const global var");
  print_variable_info<const bool*>(pcbglob,"pcbglob, bool const global pointer to bglob");
  print_variable_info< bool>(rcbglob,"rcbglob, bool const global ref to bglob");

  print_variable_info<bool>(sbglob,"sbglob, bool static global var");
  print_variable_info<bool>(csbglob,"csbglob, bool const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n" ;

  print_variable_info<char>(cglob,"cglob, char global var");
  print_variable_info<char*>(pcglob,"pcglob, char global pointer to cglob");
  print_variable_info<char>(rcglob,"rcglob, char global ref to cglob");

  std::cout << "\n[cglob, char global var] Address: " <<static_cast<const void *>(&cglob) << "\n";
  std::cout << "[pcglob, char global pointer to cglob] Value: " <<static_cast<const void *>(pcglob) << "\n";

  print_variable_info<char>(ccglob,"ccglob, char const global var");
  print_variable_info<const char*>(pccglob,"pccglob, char const global pointer to cglob");
  print_variable_info<char>(rccglob,"rccglob, char const global ref to cglob");

  std::cout << "\n[ccglob, char const global var] Address: " << static_cast<const void *>(&ccglob) << "\n";
  std::cout << "[pccglob, char const global pointer to ccglob] Value: " << static_cast<const void *>(pccglob) << "\n";

  print_variable_info<char>(scglob,"scglob, char static global var");
  print_variable_info<char>(cscglob,"cscglob, char const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<int>(iglob,"iglob, int global var");
  print_variable_info<int*>(piglob,"piglob, int global pointer to iglob");
  print_variable_info<int>(riglob,"riglob, int global ref to iglob");

  print_variable_info<int>(ciglob,"ciglob, int const global var");
  print_variable_info<const int*>(pciglob,"pciglob, int const global pointer to iglob");
  print_variable_info<int>(rciglob,"rciglob, int const global ref to iglob");

  print_variable_info<int>(siglob,"siglob, int static global var");
  print_variable_info<int>(csiglob,"csiglob, int const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<float>(fglob,"fglob, float global var");
  print_variable_info<float*>(pfglob,"pfglob, float global pointer to fglob");
  print_variable_info<float>(rfglob,"rfglob, float global ref to fglob");

  print_variable_info<float>(cfglob,"cfglob, float const global var");
  print_variable_info<const float*>(pcfglob,"pcfglob, float const global pointer to fglob");
  print_variable_info<float>(rcfglob,"rcfglob, float const global ref to fglob");

  print_variable_info<float>(sfglob,"sfglob, float static global var");
  print_variable_info<float>(csfglob,"csfglob, float const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<double>(dglob,"dglob, double global var");
  print_variable_info<double*>(pdglob,"pdglob, double global pointer to dglob");
  print_variable_info<double>(rdglob,"rdglob, double global ref to dglob");

  print_variable_info<double>(cdglob,"cdglob, double const global var");
  print_variable_info<const double*>(pcdglob,"pcdglob, double const global pointer to dglob");
  print_variable_info<double>(rcdglob,"rcdglob, double const global ref to dglob");

  print_variable_info<double>(sdglob,"sdglob, double static global var");
  print_variable_info<double>(csdglob,"csdglob, double const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<long>(lglob,"lglob, long global var");
  print_variable_info<long*>(plglob,"plglob, long global pointer to lglob");
  print_variable_info<long>(rlglob,"rlglob, long global ref to lglob");

  print_variable_info<long>(clglob,"clglob, long const global var");
  print_variable_info<const long*>(pclglob,"pclglob, long const global pointer to lglob");
  print_variable_info<long>(rclglob,"rclglob, long const global ref to lglob");

  print_variable_info<long>(slglob,"slglob, long static global var");
  print_variable_info<long>(cslglob,"cslglob, long const static global var");

  std::cout << "---------------------------------------------------------------------" << "\n";

print_variable_info<bool>(bloc,"bloc, bool local var");
  print_variable_info<bool*>(pbloc,"pbloc, bool local pointer to bloc");
  print_variable_info<bool>(rbloc,"rbloc, bool local ref to bloc");

  print_variable_info<bool>(cbloc,"cbloc, bool const local var");
  print_variable_info<const bool*>(pcbloc,"pcbloc, bool const local pointer to bloc");
  print_variable_info<bool>(rcbloc,"rcbloc, bool const local ref to bloc");

  print_variable_info<bool>(sbloc,"sbloc, bool static local var");
  print_variable_info<bool>(csbloc,"csbloc, bool const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<char>(cloc,"cloc, char local var");
  print_variable_info<char*>(pcloc,"pcloc, char local pointer to cloc");
  print_variable_info<char>(rcloc,"rcloc, char local ref to cloc");

  std::cout << "\n[cloc, char local var] Address: " <<static_cast<const void *>(&cloc) << "\n";
  std::cout << "[pcloc, char local pointer to cloc] Value: " <<static_cast<const void *>(pcloc) << "\n";

  print_variable_info<char>(ccloc,"ccloc, char const local var");
  print_variable_info<const char*>(pccloc,"pccloc, char const local pointer to cloc");
  print_variable_info<char>(rccloc,"rccloc, char const local ref to cloc");

  std::cout << "\n[ccloc, char const local var] Address: " <<static_cast<const void *>(&ccloc) << "\n";
  std::cout << "[pccloc, char const local pointer to cloc] Value: " <<static_cast<const void *>(pccloc) << "\n";

  print_variable_info<char>(scloc,"scloc, char static local var");
  print_variable_info<char>(cscloc,"cscloc, char const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<int>(iloc,"iloc, int local var");
  print_variable_info<int*>(piloc,"piloc, int local pointer to iloc");
  print_variable_info<int>(riloc,"riloc, int local ref to iloc");

  print_variable_info<int>(ciloc,"ciloc, int const local var");
  print_variable_info<const int*>(pciloc,"pciloc, int const local pointer to iloc");
  print_variable_info<int>(rciloc,"rciloc, int const local ref to iloc");

  print_variable_info<int>(siloc,"siloc, int static local var");
  print_variable_info<int>(csiloc,"csiloc, int const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<float>(floc,"floc, float local var");
  print_variable_info<float*>(pfloc,"pfloc, float local pointer to floc");
  print_variable_info<float>(rfloc,"rfloc, float local ref to floc");

  print_variable_info<float>(cfloc,"cfloc, float const local var");
  print_variable_info<const float*>(pcfloc,"pcfloc, float const local pointer to floc");
  print_variable_info<float>(rcfloc,"rcfloc, float const local ref to floc");

  print_variable_info<float>(sfloc,"sfloc, float static local var");
  print_variable_info<float>(csfloc,"csfloc, float const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<double>(dloc,"dloc, double local var");
  print_variable_info<double*>(pdloc,"pdloc, double local pointer to dloc");
  print_variable_info<double>(rdloc,"rdloc, double local ref to dloc");

  print_variable_info<double>(cdloc,"cdloc, double const local var");
  print_variable_info<const double*>(pcdloc,"pcdloc, double const local pointer to dloc");
  print_variable_info<double>(rcdloc,"rcdloc, double const local ref to dloc");

  print_variable_info<double>(sdloc,"sdloc, double static local var");
  print_variable_info<double>(csdloc,"csdloc, double const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

  print_variable_info<long>(lloc,"lloc, long local var");
  print_variable_info<long*>(plloc,"plloc, long local pointer to lloc");
  print_variable_info<long>(rlloc,"rlloc, long local ref to lloc");

  print_variable_info<long>(clloc,"clloc, long const local var");
  print_variable_info<const long*>(pclloc,"pclloc, long const local pointer to lloc");
  print_variable_info<long>(rclloc,"rclloc, long const local ref to lloc");

  print_variable_info<long>(slloc,"slloc, long static local var");
  print_variable_info<long>(cslloc,"cslloc, long const static local var");

  std::cout << "---------------------------------------------------------------------" << "\n";

    unsigned char ucloc{'k'};

    iloc=floc;
    std::cout << "iloc <- 12.34\n" << "iloc=" << iloc << "\n";
    std::cout << "-------\n";
    dloc=iloc;
    std::cout << "dloc <- 12\n" << "dloc=" << dloc << "\n";
    std::cout << "-------\n";
    iloc=cloc;
    std::cout << "iloc <- 'k'\n" << "iloc=" << iloc << "\n";
    std::cout << "-------" << "\n";
    iloc=1000;
    cloc=iloc;
    ucloc=iloc;
    std::cout << "cloc <- 1000\n" << "cloc=" << (int)cloc << "\n";
    std::cout << "ucloc <- 1000\n" << "ucloc=" << (int)ucloc << "\n";
    std::cout << "---------------------------------------------------------------------\n\n";;

    unsigned char * puchar{&ucloc};
    std::cout << "*puchar <- ucloc \n" << "*puchar=" << int (*puchar) << "\n";
    *puchar=*puchar +1;
    std::cout << "increment *puchar \n" << "*puchar=" << int (*puchar) << " \nucloc=" << (int)ucloc << "\n";

  std::cout << "---------------------------------------------------------------------\n";

    auto adloc{345.567};

    std::cout << "Variable adloc= " << adloc << "\n";
    std::cout << "Type of adloc is " << typeid(adloc).name() << "\n";

    //     To learn the most common mistakes and know how compilation errors look like try the next:
    // - create two, global and local, variables with the same name;
    // - change a value of a constant;
    // - create a reference without assigning the value;
    // - passing the address of a variable of a specific type to a pointer of a different type;
    // - print a value of nullable pointer;
    // - pass some value (for example, 0, 1, 2 ... whatever) to the pointer;
    // - pass a value to a variable of a different type (for example, pass "some_string" to int variable).

  std::cout << "---------------------------------------------------------------------" << std::endl;

    std::cout << "Global iglob befor definition of local variable = " << iglob << "\n";
    int iglob{2378};
    std::cout << "iglob after definition 'int iglob{2378}' of local variable = " << iglob << "\n";
    //the compiler doesn't generate any error. Local variable just shadow the global variable

    //icglob=18;
    //error: assignment of read-only variable ‘icglob’

    //int &riglob_new;
    //ERROR: ‘riglob_new’ declared as reference but not initialized

       // unsigned int * uipointer = &iglob;
    //error: invalid conversion from ‘int*’ to ‘unsigned int*’

    //std::cout << endl << "---------------------------------------------------------------------" << endl;

    //int * npointer{nullptr};
    //There is no compilation error
    // try{
    //    std::cout << "Value of nullptr pointer = " << *npointer << endl; 
    // }
    // catch (...){
    //     std::cout << "Error with nullptr pointer" << endl;
    // }
    //ERROR: Segmentation fault

    //std::cout << endl << "---------------------------------------------------------------------" << endl;

    //int * somepointer;

    //somepointer=56;
    //std::cout << "somepointer value = " << somepointer << ", value from pointer = " << *somepointer << endl; 
    //error: invalid conversion from ‘int’ to ‘int*’ [-fpermissive]   
    
    ///std::cout << endl << "---------------------------------------------------------------------" << endl;
    
    //iglob="Some string.";
    //ERROR: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]


    std::cout << std::endl;
    return 0;
}