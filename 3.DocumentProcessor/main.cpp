#include <iostream>

#include "DocumentProcessor.h"

int main()
{
    // 문서 객체 생성.
    Document doc1("Mo Salah", "2025.02.13", "C++ Programming");
    Document doc2("Heungmin Son", "2005.10.09", "Android");

    // 문서 처리.
    std::cout << "문서1 처리\n";
    DocumentProcessor::Process(doc1);
    std::cout << '\n';

    std::cout << "문서2 처리\n";
    DocumentProcessor::Process(doc2);
    std::cout << '\n';
}