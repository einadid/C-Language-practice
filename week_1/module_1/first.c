#include <wchar.h>

int main() {
    
    wchar_t ch = L'h';
    wprintf(L"%lc\n", ch);  // আউটপুট: আ


    wchar_t str[] = L"vdsfg";
wprintf(L"%ls\n", str);  // আউটপুট: বাংলা

    

    return 0;
}