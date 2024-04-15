#include <iostream>
#include <functional>
#include "HashTable.hpp"
#include <stdlib.h>
using namespace std;



int main()
{


HashTable* t = new HashTable(13);
t->Insert("asdf");
t->Insert("uganda");
t->Insert("jachcidom");
t->Insert("lorem Ipsum");
t->Insert("qwertzuiop");
t->Insert("nehesujme");
t->Insert("RIKAL SEM TI NEHESUJ ME");
t->Insert("kurnik");
t->Insert("jachcidom rikam");
t->Insert("kasluto");
/*t->Insert("asdfghjkl");
t->Insert("nechcuhes");
t->Insert("nechcuhes rikam");
t->Insert("123456789");
t->Insert("666");
t->Insert("ad453sa43f4as");
t->Insert("ad453saa43f4as");
t->Insert("ad453sa451d3f4as");
t->Insert("ja jsem nahodny string");
t->Insert("ja jsem dalsi nahodny string");
t->Insert("ja nechcu byt string");
t->Insert("ja jsem nahodny *****");
t->Insert("potreti nechci hes");
t->Insert("ja jsem zas nahodny string");
t->Insert("CHCU DOM");
t->Insert("Varuju te nehesuj me furt");
t->Insert("667");
t->Insert("667");
t->Insert("667a");
t->Insert("FFFF");
t->Insert("0xFFFF");
t->Insert("6670X");
t->Insert("66700000000000000000000000000000000000000000000000000000000000000000");
t->Insert("FIX FFF");
t->Insert("0xACDF");
t->Insert("a jaa tam nechci");
t->Insert("Prilis zlutoucky kun upel dabelske ody");
t->Insert("Ale moc nahlas");
t->Insert("leden");
t->Insert("unor");
t->Insert("brezen");
t->Insert("duben");
t->Insert("kveten");
t->Insert("cerven");
t->Insert("cervenec");
t->Insert("srpen");
t->Insert("zari");
t->Insert("rijen");
t->Insert("listopad");
t->Insert("prosinec");
t->Insert("pondeli");
t->Insert("utery");
t->Insert("streda");
t->Insert("ctvrtek");
t->Insert("patek");
t->Insert("sobota");
t->Insert("nedele");
*/


t->Report();

cout<<boolalpha<<"Searching \"asdf\"\t\t"<<t->Search("asdf")<<endl;
cout<<boolalpha<<"Searching \"uganda\"\t\t"<<t->Search("uganda")<<endl;
cout<<boolalpha<<"Searching \"jachcidom\"\t\t"<<t->Search("jachcidom")<<endl;
cout<<boolalpha<<"Searching \"lorem Ipsum\"\t\t"<<t->Search("lorem Ipsum")<<endl;
cout<<boolalpha<<"Searching \"qwertzuiop\"\t\t"<<t->Search("qwertzuiop")<<endl;
cout<<boolalpha<<"Searching \"nehesujme\"\t\t"<<t->Search("nehesujme")<<endl;
cout<<boolalpha<<"Searching \"RIKAL SEM TI NEHESUJ ME\"\t\t"<<t->Search("RIKAL SEM TI NEHESUJ ME")<<endl;
cout<<boolalpha<<"Searching \"kurnik\"\t\t"<<t->Search("kurnik")<<endl;
/*cout<<boolalpha<<"Searching \"jachcidom rikam\"\t\t"<<t->Search("jachcidom rikam")<<endl;
cout<<boolalpha<<"Searching \"kasluto\"\t\t"<<t->Search("kasluto")<<endl;
cout<<boolalpha<<"Searching \"asdfghjkl\"\t\t"<<t->Search("asdfghjkl")<<endl;
cout<<boolalpha<<"Searching \"nechcuhes\"\t\t"<<t->Search("nechcuhes")<<endl;
cout<<boolalpha<<"Searching \"nechcuhes rikam\"\t\t"<<t->Search("nechcuhes rikam")<<endl;
cout<<boolalpha<<"Searching \"123456789\"\t\t"<<t->Search("123456789")<<endl;
cout<<boolalpha<<"Searching \"666\"\t\t"<<t->Search("666")<<endl;
cout<<boolalpha<<"Searching \"ad453sa43f4as\"\t\t"<<t->Search("ad453sa43f4as")<<endl;
cout<<boolalpha<<"Searching \"ad453saa43f4as\"\t\t"<<t->Search("ad453saa43f4as")<<endl;
cout<<boolalpha<<"Searching \"ad453sa451d3f4as\"\t\t"<<t->Search("ad453sa451d3f4as")<<endl;
cout<<boolalpha<<"Searching \"ja jsem nahodny string\"\t\t"<<t->Search("ja jsem nahodny string")<<endl;
cout<<boolalpha<<"Searching \"ja jsem dalsi nahodny string\"\t\t"<<t->Search("ja jsem dalsi nahodny string")<<endl;
cout<<boolalpha<<"Searching \"ja nechcu byt string\"\t\t"<<t->Search("ja nechcu byt string")<<endl;
cout<<boolalpha<<"Searching \"ja jsem nahodny *****\"\t\t"<<t->Search("ja jsem nahodny *****")<<endl;
cout<<boolalpha<<"Searching \"potreti nechci hes\"\t\t"<<t->Search("potreti nechci hes")<<endl;
cout<<boolalpha<<"Searching \"ja jsem zas nahodny string\"\t\t"<<t->Search("ja jsem zas nahodny string")<<endl;
cout<<boolalpha<<"Searching \"CHCU DOM\"\t\t"<<t->Search("CHCU DOM")<<endl;
cout<<boolalpha<<"Searching \"Varuju te nehesuj me furt\"\t\t"<<t->Search("Varuju te nehesuj me furt")<<endl;
cout<<boolalpha<<"Searching \"667\"\t\t"<<t->Search("667")<<endl;
cout<<boolalpha<<"Searching \"667\"\t\t"<<t->Search("667")<<endl;
cout<<boolalpha<<"Searching \"667a\"\t\t"<<t->Search("667a")<<endl;
cout<<boolalpha<<"Searching \"FFFF\"\t\t"<<t->Search("FFFF")<<endl;
cout<<boolalpha<<"Searching \"0xFFFF\"\t\t"<<t->Search("0xFFFF")<<endl;
cout<<boolalpha<<"Searching \"6670X\"\t\t"<<t->Search("6670X")<<endl;
cout<<boolalpha<<"Searching \"66700000000000000000000000000000000000000000000000000000000000000000\"\t\t"<<t->Search("66700000000000000000000000000000000000000000000000000000000000000000")<<endl;
cout<<boolalpha<<"Searching \"FIX FFF\"\t\t"<<t->Search("FIX FFF")<<endl;
cout<<boolalpha<<"Searching \"0xACDF\"\t\t"<<t->Search("0xACDF")<<endl;
cout<<boolalpha<<"Searching \"a jaa tam nechci\"\t\t"<<t->Search("a jaa tam nechci")<<endl;
cout<<boolalpha<<"Searching \"Prilis zlutoucky kun upel dabelske ody\"\t\t"<<t->Search("Prilis zlutoucky kun upel dabelske ody")<<endl;
cout<<boolalpha<<"Searching \"Ale moc nahlas\"\t\t"<<t->Search("Ale moc nahlas")<<endl;
cout<<boolalpha<<"Searching \"leden\"\t\t"<<t->Search("leden")<<endl;
cout<<boolalpha<<"Searching \"unor\"\t\t"<<t->Search("unor")<<endl;
cout<<boolalpha<<"Searching \"brezen\"\t\t"<<t->Search("brezen")<<endl;
cout<<boolalpha<<"Searching \"duben\"\t\t"<<t->Search("duben")<<endl;
cout<<boolalpha<<"Searching \"kveten\"\t\t"<<t->Search("kveten")<<endl;
cout<<boolalpha<<"Searching \"cerven\"\t\t"<<t->Search("cerven")<<endl;
cout<<boolalpha<<"Searching \"cervenec\"\t\t"<<t->Search("cervenec")<<endl;
cout<<boolalpha<<"Searching \"srpen\"\t\t"<<t->Search("srpen")<<endl;
cout<<boolalpha<<"Searching \"zari\"\t\t"<<t->Search("zari")<<endl;
cout<<boolalpha<<"Searching \"rijen\"\t\t"<<t->Search("rijen")<<endl;
cout<<boolalpha<<"Searching \"listopad\"\t\t"<<t->Search("listopad")<<endl;
cout<<boolalpha<<"Searching \"prosinec\"\t\t"<<t->Search("prosinec")<<endl;
cout<<boolalpha<<"Searching \"pondeli\"\t\t"<<t->Search("pondeli")<<endl;
cout<<boolalpha<<"Searching \"utery\"\t\t"<<t->Search("utery")<<endl;
cout<<boolalpha<<"Searching \"streda\"\t\t"<<t->Search("streda")<<endl;
cout<<boolalpha<<"Searching \"ctvrtek\"\t\t"<<t->Search("ctvrtek")<<endl;
cout<<boolalpha<<"Searching \"patek\"\t\t"<<t->Search("patek")<<endl;
cout<<boolalpha<<"Searching \"sobota\"\t\t"<<t->Search("sobota")<<endl;
cout<<boolalpha<<"Searching \"nedele\"\t\t"<<t->Search("nedele")<<endl;
*/
cout<<"Strings: "<<t->Count()<<endl;
cout<<"Factor: "<<t->LoadFactor()<<endl;
delete t;
   return 0;
}
