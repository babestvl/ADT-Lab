#include <iostream>
#include <vector>
#include <list>

using namespace std;

#define MAX_N 100000

int n,m,trees = 0,minerals = 0;
int tree[MAX_N];
int mineral[MAX_N];
char map[30][30];
vector<int> adj[MAX_N];
int levels[MAX_N];

void read_input()
{
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            map[i][j] = c;
            if (c == '*') {
                tree[trees++] = i*m+j;
            }
            if (c == '$') {
                mineral[minerals++] = i*m+j;
            }
        }
    }


    for (int i = 0; i < n;i++) {
        for (int j = 0; j < m; j++) {
            int u = (i*m)+j;
            if (j < m-1 && map[i][j] != '#' && map[i][j+1] != '#') {
                int v = i*m+j+1;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
            if (i < n-1 && map[i][j] != '#' && map[i+1][j] != '#') {
                int v = ((i+1)*m) + j;
                adj[u].push_back(v);
                adj[v].push_back(u);
            }
        }
    }
}

void find_levels(int s)
{
    list<int> next_level;
    for(int u=0; u<n*m; u++) {
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
    int high = 0;
    int medium = 0;
    read_input();
    for (int i=0; i < n*m;i++) {
        find_levels(i);
        bool t = false;
        bool m = false;
        for (int j = 0; j < trees; j++) {
            if (levels[tree[j]] != -1) {
                t = true;
                break;
            }
        }
        for (int j = 0; j < minerals; j++) {
            if (levels[mineral[j]] != -1) {
                m = true;
                break;
            }
        }
        if (t&&m) {
            high++;
        }
        else if (t||m) {
            medium++;
        }

    }
    cout << high << " " << medium;

    return 0;
}