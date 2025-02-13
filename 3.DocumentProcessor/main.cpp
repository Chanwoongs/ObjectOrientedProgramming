﻿#include <iostream>

#include "DocumentProcessor.h"

#include "SpellCheckProcess.h"
#include "RepaginateProcess.h"
#include "TranslateIntoFrenchProcess.h"

// 문서 처리자를 구성하는 함수.
DocumentProcessor* Configure()
{
    DocumentProcessor* processor = new DocumentProcessor();
    //processor->GetProcesses().emplace_back(new TranslateIntoFrenchProcess());
    //processor->GetProcesses().emplace_back(new SpellcheckProcess());
    //processor->GetProcesses().emplace_back(new RepaginateProcess());

    processor->AddDocumentProcess(DocumentProcess::TranslateIntoFrench);
    processor->AddDocumentProcess(DocumentProcess::Repaginate);
    processor->AddDocumentProcess(DocumentProcess::SpellCheck);

    return processor;
}

int main()
{
    // 문서 객체 생성.
    Document doc1("Mo Salah", "2025.02.13", "C++ Programming");
    Document doc2("Heungmin Son", "2005.10.09", "Android");

    // 문서 처리자 객체 생성(팩토리 패턴).
    DocumentProcessor* processor = Configure();

    // 문서 처리.
    std::cout << "문서1 처리\n";
    processor->Process(doc1);
    std::cout << '\n';
    
    std::cout << "문서2 처리\n";
    processor->Process(doc2);
    std::cout << '\n';

    delete processor;
} 