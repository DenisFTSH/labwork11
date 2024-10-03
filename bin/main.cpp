#include <iostream>
#include <stack>
#include <map>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include "lib/SearchEngine/SearchEngine.h"
#include "lib/Searcher/Searcher.h"

int main(int argc, char *argv[]) {
    char *tmp[2] = {"", R"(C:\Users\2\lngst_substr_wo_rep_chars\aaa)"};
    SearchEngine a(2, tmp);
    char *tmp2[2] = {"", R"(vector OR list)"};
    Searcher b(2, tmp2);
    b.PrintResult();
    return 0;
}
