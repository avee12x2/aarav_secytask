#include<bits/stdc++.h>

using namespace std;

struct Person{
    int preference;
    int prefby;
    vector <pair<int, int> > wantedby;
    bool isdouble;
    bool istriple;
    int dblpart;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int x, y;
    cin>>x>>y;
    vector <Person> v(n+1);
    for(int i=1; i<=n; i++)
    {
        v[i].isdouble = false;
        v[i].istriple = false;
        int pref;
        cin>>pref;
        v[i].preference = pref;
        v[v[i].preference].prefby++;

    }
 //   cout<<v[1].prefby;
    for(int i=1; i<=n; i++)
    {
        v[v[i].preference].wantedby.push_back(make_pair(v[i].prefby, i));
    }
    set <pair<pair <int, int>, pair<int, int> > > s;
    for(int i=1; i<=n; i++)
    {
        for(int j=0; j<v[i].wantedby.size(); j++)
        {
            s.insert(make_pair(make_pair(v[i].wantedby[j].first, -v[i].prefby), make_pair(v[i].wantedby[j].second, i)));
        }
    }
    int ans = 0;
    for(int id1=1; id1<=n && x+y>0; id1++)
    {
        int id2 = v[id1].preference;
        if(v[id2].preference==id1 && !(v[id1].isdouble | v[id1].istriple))
        {
            if(min(v[id1].prefby, v[id2].prefby) < 3 )
            {
            v[id1].isdouble = v[id2].isdouble = true;
            v[id1].dblpart = id2;
            v[id2].dblpart = id1;
            ans += 2;
            y--;
            }
        }
    }
//    cout<<ans;
    auto it = s.begin();
    while(it!=s.end() && x+y>0)
    {
        int id1 = (*it).second.second;
        int id2 = (*it).second.first;
        if(!(v[id1].isdouble | v[id1].istriple | v[id2].isdouble | v[id2].istriple))
        {
            v[id1].isdouble = v[id2].isdouble = true;
            v[id1].dblpart = id2;
            v[id2].dblpart = id1;
            ans++;
            if(v[id1].preference==id2)
            {
                ans++;
            }
            y--;
        }
        else if(v[id1].isdouble && (!v[id1].istriple) && !(v[id2].isdouble & v[id2].istriple) && x>0)
        {
            int id3 = v[id1].dblpart;
            v[id1].isdouble = v[id3].isdouble = false;
            v[id1].istriple = v[id2].istriple = v[id3].istriple = true;
            ans++;
            if(v[id1].preference==id2)
            {
                ans++;
            }
            y++;
            x--;
        }
        it++;
    }
 //   cout<<ans;
    it= s.begin();
    while(x>0 && it==s.begin())
    {
        int id1 = (*it).second.second;
        int id2 = (*it).second.first;
        if(!v[id1].istriple)
        {
            id2 = v[id1].dblpart;
            int id3 = v[id1].preference;
            if(!(v[id3].isdouble | v[id3].istriple))
            {
                v[id1].isdouble = v[id2].isdouble = false;
                v[id1].istriple = v[id2].istriple = v[id3].istriple = true;
                ans++;
                if(v[id3].preference==id1 || v[id3].preference==id2)
                {
                    ans++;
                }
                x--;
                y++;
            }

        }
        it++;
    }
    for(int i=1; i<=n && x>0; i++)
    {
        if(!(v[i].isdouble | v[i].istriple))
        {
            int pref = v[i].preference;
            if(v[pref].isdouble && !v[pref].istriple)
            {
                int otherpart = v[pref].dblpart;
                v[pref].isdouble = v[otherpart].isdouble = false;
                v[i].istriple = v[pref].istriple = v[otherpart].istriple = true;
                ans++;
                x--;
            }
        }
    }
    cout<<ans<<"\n";
    }
    return 0;
}