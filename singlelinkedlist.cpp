#include <iostream>
#include <string.h>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

public:
    LinkedList()
    {
        START = NULL;
    }
    void addNode()
    {
        int nim;
        cout << "\nMaukan Nomer Mahasiswa: ";
        cin >> nim;

        Node *nodeBaru = new Node;
        nodeBaru->noMhs = nim;

        if (START == NULL || nim <= START->noMhs)
        {
            if ((START != NULL) && (nim == START->noMhs))
            return;
        }
        Node *previous = START;
        Node *current = START;

        while ((current != NULL) && (nim >= current->noMhs))
    }
         if (nim == current->noMhs)
         {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
         }
         previous = current;
         current = current->next;
        }
        
        nodeBaru->next = current;
        previous->next = nodeBaru;
    
        }
    
        bool LinkedList()
        {
            return (START == NULL);
        }
    
        bool Search(int nim, Node **previous, Node **current)
        {
            *previous == START;
            *current = START;
    
            while ((current != NULL ) && (nim != (*current)->noMhs))
            {
                *previous = *current;
                *current = (*current)->next;
             }
    
             return (*current != NULL);
        }
    
        bool delNode(int nim)
        {
            Node *current, *previous;
            if (!Search(nim, &previous, &current))
                return false;
    
            if (current == START)
                START = START->next;
    
            else 
                previous->next = current->next;
    
            delete current;
            return true;
        }
        
        void traverse()
        {
            if (ListEmpty())
            {
                cout << "\nList kosong\n";
            }
            else
            }
                cout << "\nData didalam List adalah:\n";
                Node *currentNode = START;
                while (currentNode != NULL)
                {
                    cout << currentNode->noMhs << endl;
                    currentNode = currentNode->next;
                }
                cout << endl;
            }
        }
    };

    int main()
{
    LinkedList Mhs;
    int nim;
    char ch;

    do
    {
       cout << "Menu" << endl;
       cout << "1. Menambahkan data kedalam list" << endl;
       cout << "2. Menghapus data  dari dalam list"  << endl;
       cout << "3. Menampilkan semua data didalam  list" << endl;
       cout << "4. Mencari data dalam list" << endl;
       cout << "5. Keluar" << endl;
       cout << endl
            << "Masukan pilihan (1-5): ";
       cin >> ch;
       switch (ch)
      {
