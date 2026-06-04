#include<bits/stdc++.h>

using namespace std;

typedef enum categoria {
    cristalino,
    gasoso,
    metalico,
    organico,
    sintetico
} categoria;

typedef struct elem {
    string nome;
    enum categoria Categoria;
    int analise_quimica;
    double est_energetica;
} elem;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unordered_map<string, categoria> catMap = {
        {"cristalino", cristalino},
        {"gasoso",     gasoso},
        {"metalico",   metalico},
        {"organico",   organico},
        {"sintetico",  sintetico}
    };
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++)
    {
        int m; cin >> m;
        vector<elem> a(m);
        for(int j = 0; j < m; j++){
            string name, cat; int an_qui; double est_ene;
            cin >> name >> cat >> an_qui >> est_ene;
            a[j].nome = name; a[j].Categoria = catMap[cat]; a[j].analise_quimica = an_qui; 
            a[j].est_energetica = est_ene;
        }
        sort(a.begin(), a.end(), [](const elem &a, const elem &b){
            if(a.Categoria != b.Categoria)
                return a.Categoria < b.Categoria;
            else
            {
                switch(a.Categoria){
                    case 0: 
                        if(a.analise_quimica != b.analise_quimica)
                            return a.analise_quimica < b.analise_quimica;
                        else
                            return a.nome < b.nome;
                        break;
                    case 1:
                        if(fabs(a.est_energetica - b.est_energetica) > 1e-9)
                            return a.est_energetica > b.est_energetica;
                        else
                            return a.nome < b.nome;
                        break;
                    case 2:
                        if(a.nome != b.nome)
                            return a.nome < b.nome;
                        else
                            return a.analise_quimica > b.analise_quimica;
                        break;
                    case 3:
                        if(a.nome != b.nome)
                            return a.nome < b.nome;
                        else
                            return a.est_energetica < b.est_energetica;
                        break;
                    case 4:
                        if(fabs(a.est_energetica - b.est_energetica) > 1e-9)
                            return a.est_energetica < b.est_energetica;
                        else
                            return a.analise_quimica > b.analise_quimica;
                        break;
                    default:
                        return false;
                }
            }
        });
        for(int k = 0; k < min(3, m); k++)
        {
            cout << a[k].nome << " " 
            << a[k].analise_quimica << " " 
            << fixed << setprecision(2) << a[k].est_energetica << '\n';
        }

        if(i < n -1)
            cout << '\n';
    }
    return 0;
}
