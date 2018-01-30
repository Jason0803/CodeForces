#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
    int n, m;
    cin >> n >> m;
    vector<pair<string, string>> ips(n);
    vector<pair<string, string>> commands(m);
    
    string name, ip, command;
    for(int i=0; i<n; i++) {
        cin >> name >> ip;
        ips[i].first = name;
        ips[i].second = ip;
    }
    for(int i=0; i<m; i++) {
        cin >> command >> ip;
        commands[i].first = command;
        ip.pop_back();
        commands[i].second = ip;
    }
    for(int i=0; i<m; i++) {
        ip = commands[i].second;
        for(int j=0; j<n; j++) {
            if(ip == ips[j].second) {
                printf("%s %s; #%s\n", commands[i].first.c_str(), commands[i].second.c_str(), ips[j].first.c_str() );
            }
        }
    }
    return 0;
}
