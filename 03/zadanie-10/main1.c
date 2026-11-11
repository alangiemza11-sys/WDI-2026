#include <stdio.h>

#define N 10

int pom[N];   

int merge(int t[], int l, int s, int p)
{
    int i = l;        
    int j = s + 1;    
    int k = l;        

    while (i <= s && j <= p) {
        if (t[i] <= t[j])
            pom[k++] = t[i++];
        else
            pom[k++] = t[j++];
    }
    while (i <= s)
        pom[k++] = t[i++];
    while (j <= p)
        pom[k++] = t[j++];

    for (k = l; k <= p; k++)    
        t[k] = pom[k];
    return 0;
}


int merge_sort(int t[], int l, int p)
{
    int s;
    if (l >= p)
        return 0;           

    s = (l + p) / 2;
    merge_sort(t, l, s);        
    merge_sort(t, s + 1, p);    
    merge(t, l, s, p);          
    return 0;
}

int pokaz(int t[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", t[i]);
    printf("\n");
    return 0;
}

int main()
{
    int tab[N];
    int i;

    printf("Wpisz %d liczb:\n", N);
    for (i = 0; i < N; i++) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Przed sortowaniem: ");
    pokaz(tab, N);

    merge_sort(tab, 0, N - 1);

    printf("Po sortowaniu:     ");
    pokaz(tab, N);

    return 0;
}