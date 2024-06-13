#include <iostream>
#include <fstream>
using namespace std;
int main()
{
char line[100];

ifstream is("ITEM.txt");
ofstream os("employee.txt");

if (is.is_open()){
while (!is.eof()){
is.getline(line,100,'\n');
os << line << endl;
}
}
else{
cout << "Item.txt couldn't be opened. Create and write something in a.txt, and try again." << endl;
}

return 0;
}
