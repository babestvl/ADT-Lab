#include <iostream>
#include <vector>
#include <list>


using namespace std;

#define MAX_N 100000

int n,r;
vector<int> adj[MAX_N];
int levels[MAX_N];
pair<int,int> xy[MAX_N];


bool isAdj(int x1, int y1, int x2, int y2) {
    return ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) <= r*r;
}

void read_input()
{
    int a, b;
    cin >> n >> r;
    for(int i=1; i<=n; i++) {
        cin >> a >> b;
        xy[i] = make_pair(a,b);
    }
    n+=2;
    xy[0] = make_pair(0,0);
    xy[n-1] = make_pair(100,100);
    for(int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (isAdj(xy[i].first,xy[i].second,xy[j].first,xy[j].second)) {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
}

void find_levels(int s)
{
    list<int> next_level;
    for(int u=0; u<n; u++) {
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
    find_levels(0);
    cout << levels[n-1] << endl;
    return 0;
}