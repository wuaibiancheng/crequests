#include <map>
#include <cstdio>
#include "crequests.h"

int main() {
    std::map<std::string, std::string> headers;
    headers["Connection"] = "keep-alive";
    std::string url = "https://www.baidu.com";
    headers.insert(std::make_pair("User-Agent", "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/77.0.3865.90 Safari/537.36"));
    auto r = crequests::get(url, headers);
    printf("%d\n", r.status_code_);
    printf("%s\n", r.get_body().c_str());
    return 0;
}