#include <iostream>
#include <cmath>
using namespace std;

int mn;


void display(int list[], int sz) {
    for (int i = 0; i < sz; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

void extractodd(int list1[], int list2[], int list3[], int m, int n) {
    int ind = 0;
    
    for (int i = 0; i < m; i++) {
        
        if (list1[i] % 2 == 1) {
            list3[ind++] = list1[i];
        }
    }

    
    for (int i = 0; i < n; i++) {
        
        if (list2[i] % 2 == 1) {
            list3[ind++] = list2[i];
        }
    }
    mn = ind;
}

void extracteven(int list1[], int list2[], int list3[], int m, int n) {
    int ind = 0;
    
    for (int i = 0; i < m; i++) {
       
        if (list1[i] % 2 == 0) {
            list3[ind++] = list1[i];
        }
    }
   
    for (int i = 0; i < n; i++) {
        
        if (list2[i] % 2 == 0) {
            list3[ind++] = list2[i];
        }
    }
    mn = ind;
}


void merge(int list1[], int list2[], int list3[], int start, int m, int n) {

    int ind1 = 0, ind2 = 0, ind = start;
    while (ind1 < m && ind2 < n) {
        list3[ind++] = (list1[ind1] < list2[ind2]) ? list1[ind1++] : list2[ind2++];
    }
    while (ind1 < m) {
        list3[ind++] = list1[ind1++];
    }
    while (ind2 < n) {
        list3[ind++] = list2[ind2++];
    }
}

void mergeSortUtil(int list[], int st, int lt) {
    
    if (st < lt) {
        int mid = (st + lt) / 2;
        mergeSortUtil(list, st, mid);
        mergeSortUtil(list, mid + 1, lt);
        int list1[mid - st + 1], list2[lt - mid];
        int ind = 0;
        for (int i = st; i <= mid; i++) {
            list1[ind++] = list[i];
        }
        ind = 0;
        for (int i = mid + 1; i <= lt; i++) {
            list2[ind++] = list[i];
        }
        merge(list1, list2, list, st, mid - st + 1, lt - mid);
    }
}

void mergeSort(int list1[], int list2[], int list3[], int m, int n) {
    mergeSortUtil(list1, 0, m - 1);
    mergeSortUtil(list2, 0, n - 1);
    merge(list1, list2, list3, 0, m, n);
}

int main()
{
   
    int m, n;

   
    cout << "Enter amount of numbers in list 1 and 2" << endl;
    cin >> m >> n; mn = m + n;
    int list1[m], list2[n], list3[mn];
    cout << "Enter values of list 1 seperated by a space" << endl;
    for (int i = 0; i < m; i++) {
        cin >> list1[i];
    }
    cout << "Enter values of list 2 seperated by a space" << endl;
    for (int i = 0; i < n; i++) {
        cin >> list2[i];
    }
    cout << "Odd NO from both lists" << endl;
    extractodd(list1, list2, list3, m, n);
    cout << "List 3: ";
    display(list3, mn);

    cout << "Even numbers from the lists" << endl;
    extracteven(list1, list2, list3, m, n);
    cout << "List 3:";
    display(list3, mn);

    mn = m + n;
    
    merge(list1, list2, list3, 0, m, n);
    cout << "List 3: ";
    display(list3, mn);

    cout << "Inc order of list 1 and 2" << endl;
    mergeSort(list1, list2, list3, m, n);
    cout << "List 3: ";
    display(list3, mn);

    return 0;
}