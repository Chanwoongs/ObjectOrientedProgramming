#pragma once

#include <vector>

#include "IDocumentProcess.h"
#include "DocumentProcess.h"

// 문서를 처리하는 처리자 클래스.
class DocumentProcessor
{
public:
    std::vector<IDocumentProcess*>& GetProcesses() { return processes; }

    void Process(const Document& doc)
    {
        for (IDocumentProcess* process : processes)
        {
            process->Process(doc);
        }
    }

private:
    std::vector<IDocumentProcess*> processes;
};