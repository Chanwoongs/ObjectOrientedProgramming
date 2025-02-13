#pragma once

#include "DocumentProcess.h"

class DocumentProcessor
{
public:
    static void Process(const Document& document)
    {
        DocumentProcess::TranslateIntoFrench(document);
        DocumentProcess::SpellCheck(document);
        DocumentProcess::Repaginate(document);
    }
};