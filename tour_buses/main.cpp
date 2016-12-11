#include <iostream>
#include <vector>
#include <list>

using namespace std;

#define MAX_N 100000

int n,m,k;
vector< pair<int,int> > adj[MAX_N];
int levels[MAX_N];

void read_input()
{
    cin >> n >> m >> k;
    for(int i=0; i<m; i++) {
        int u,v,h;
        cin >> u >> v >> h;
        adj[u].push_back(make_pair(v,h));
        adj[v].push_back(make_pair(u,h));
    }

}

void find_levels(int s, int h)
{
    list<int> next_level;
    for(int u=1; u<=n; u++) {
        levels[u] = -1;
    }
    next_level.push_back(s);
    levels[s] = 0;

    while(! next_level.empty()) {
        list<int> current_level = next_level;
        next_level.clear();

        for(list<int>::iterator i = current_level.begin();
            i != current_level.end(); i++) {
            int u = *i;

            for(vector< pair<int, int> >::iterator j = adj[u].begin();
                j != adj[u].end(); j++) {
                int v = j.base()->first;

                if(levels[v] == -1 && h <= j.base()->second) {
                    levels[v] = levels[u] + 1;
                    next_level.push_back(v);
                }
            }
        }
    }
}

int main()
{
    read_input();
    int s1 = 0,s2 = 0,h = 0;
    for (int i = 0; i < k; i++) {
        cin >> s1 >> s2 >> h;
        find_levels(s1,h);
        if (levels[s2] != -1) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
    return 0;
}