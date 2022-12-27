#include <windows.h>
#include <tchar.h>
#include <stdio.h>
#include <psapi.h>

// função para exibir o nome de um processo a partir de seu identificador
void PrintProcessNameAndID(DWORD processID)
{
    TCHAR szProcessName[MAX_PATH] = TEXT("<nome desconhecido>");

    // tenta obter um handle para o processo
    HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION |
                                  PROCESS_VM_READ,
                                  FALSE, processID);

    // se conseguir um handle, tenta obter o nome do processo
    if (NULL != hProcess)
    {
        HMODULE hMod;
        DWORD cbNeeded;

        if (EnumProcessModules(hProcess, &hMod, sizeof(hMod), 
             &cbNeeded))
        {
            GetModuleBaseName(hProcess, hMod, szProcessName, 
                              sizeof(szProcessName)/sizeof(TCHAR));
        }
    }

    // exibe o ID e o nome do processo
    _tprintf(TEXT("%lu  %s\n"), processID, szProcessName);

    // fecha o handle do processo
    CloseHandle(hProcess);
}

int main( void )
{
    // obtém a quantidade de processos ativos
    DWORD aProcesses[1024], cbNeeded, cProcesses;
    unsigned int i;

    if (!EnumProcesses(aProcesses, sizeof(aProcesses), &cbNeeded))
    {
        return 1;
    }

    // calcula a quantidade de processos ativos
    cProcesses = cbNeeded / sizeof(DWORD);

    // exibe informações sobre cada processo
    for (i = 0; i < cProcesses; i++)
    {
        if (aProcesses[i] != 0)
        {
            PrintProcessNameAndID(aProcesses[i]);
        }
    }

    return 0;
}
