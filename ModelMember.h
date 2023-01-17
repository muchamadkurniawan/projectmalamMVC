#include "storage.h"
#include <iostream>

using namespace std;

void FindAllMember(){
    for (int i = 0; i <= index ; i++){
        cout<<"-------------------------------"<<endl;
        cout<<"id member : "<<id_member[i]<<endl;
        cout<<"nama member : "<<nama_member[i]<<endl;
    }
}

int FindByIdMember(int id){
    int ind = -1;
    for (int i = 0; i <= index ; i++){
        if (id_member[i]==id){
            ind = 1;
        }
    }
    return ind;
}

void InsertMember(string nama){
    index = index + 1;
    id_member[index] = index+1;
    nama_member[index] = nama;
}

void UpdateMember();

void DeleteMember();