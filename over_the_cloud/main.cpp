#include <iostream>
#include <vector>
#include <list>

using namespace std;

#define MAX_N 1000000

int n,m,l,s,t;
vector<int> adj[MAX_N];
int levels[MAX_N];

void read_input()
{
    cin >> n >> m >> l >> s >> t;
    int height[n];
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        height[i] = a;
    }
    for (int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        if (height[a-1] + l >= height[b-1]) {
            adj[a].push_back(b);
        }
        if (height[b-1] + l >= height[a-1]) {
            adj[b].push_back(a);
        }
    }


}

void find_levels(int s)
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

            for(vector<int>::iterator j = adj[u].begin();
                j != adj[u].end(); j++) {
                int v = *j;

                if(levels[v] == -1) {
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
    find_levels(s);
    cout << levels[t] << endl;
    return 0;
}