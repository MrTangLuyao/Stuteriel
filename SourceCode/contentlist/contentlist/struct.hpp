#include <string>
#define MAX 1000
struct book
{
    string name;
    string owner;
    string ISSN;
    string otherDetails;
};

struct bookList
{
    book bookArray[MAX];
    int size;
};
