#include "DC.h"
#include <istream>
#include <ostream>

using namespace std;

int main()
{
    string inputString,huffmanEncoded,rleEncoded,lzwEncoded;
    ifstream inputFile;
    ofstream huffmanFile,rleFile,lzwFile;

    inputFile.open("input.txt");
    huffmanFile.open("h.txt");
    rleFile.open("r.txt");
    lzwFile.open("l.txt");

    inputFile >> inputString;
    inputFile.close();

    huffmanEncoded = TextCompression::MHuffman(inputString);
    lzwEncoded = TextCompression::MLZW(inputString);
    rleEncoded = TextCompression::MRLE(inputString);

    huffmanFile << huffmanEncoded;
    huffmanFile.close();

    rleFile << rleEncoded;
    rleFile.close();
    lzwFile << lzwEncoded;
    lzwFile.close();

    return 0;
}
