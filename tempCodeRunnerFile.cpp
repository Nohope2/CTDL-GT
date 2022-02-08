 cin >> n >> k;
        a.resize(n, 0);
        b.resize(n, 0);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        BackTrack(0);
        for (int i = 0; i < res.size(); i++)
        {
            int k = 0;
            for (int j = 0; j < res[i].size(); j++)
            {
                if (res[i][j] == 1&&k == 0) 
                {
                    cout << '[' << b[j];
                    k = 1;
                }
                if(res[i][j] == 1&&k == 1)   cout << ' ' << b[j];
            }
            if(k != 0) cout << ']' << ' ';
        }
        cout << endl;
        res.clear();
        a.clear();
        b.clear();