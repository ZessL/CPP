#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream read;
    ofstream outbuff;
    ifstream inbuff;
    ofstream inout;

    int count = 0;
    int counter = 0;
    int buffer;
    string path = "//home//zess//cpp//in.txt";
    string pathbuff = "//home//zess//cpp//buff.txt";
    string pathout = "//home//zess//cpp//out.txt";
    read.open(path);
    if(read){
        while(!read.eof()){
            read >> buffer;
            count++;
        }
        cout<<"Founded count: "<<count<<"\n";
    } else{cout<<"File not exist"; return 0;}
    int numbers[count-1];
    read.close();
    read.open(path);
    if(read){
        while(!read.eof() && (counter < count-1)){
                read>>numbers[counter];
            cout<<"Число №"<<counter<<": "<<numbers[counter]<<"\n";
            counter++;
        }
        read.close();
    } else{cout<<"This file not exist: "<<path; return 0;}

    int poscount = 0;
    int negcount = 0;

    for(int i = 0; i<counter; i++){
        if(numbers[i] < 0){
            negcount++;
        } else if(numbers[i] > 0){
            poscount++;
        } else{cout<<"Число равно нулю"<<"\n"; continue; }
    }

    int positives[poscount];
    int negatives[negcount];

    int pos = 0;
    int neg = 0;
    for(int i = 0; i < counter; i++ ){
        if(numbers[i]>0){
            positives[pos] = numbers[i];
            cout<<"Позитивное: "<<positives[pos]<<"\n";
            pos++;
        } else if(numbers[i]<0){
            negatives[neg] = numbers[i];
            cout<<"Негативное: "<<negatives[neg]<<"\n";
            neg++;
        }
    }

    outbuff.open(pathbuff);
    if(outbuff){
        int check = 0;
        int j = 0;
        for(int i = 0; i < counter; i++){
            if(!check){
                outbuff<<positives[j]<<" ";
                j++;
                if(j == pos){j = 0; check = 1;}else{}
            } else if(check){
                outbuff<<negatives[j]<<" ";
                j++;
                if(j == negatives[j]){j = 0; break;}
            }
        }
    }else{cout<<"Файла буфера не существует: "<<pathbuff<<"\n";}
    outbuff.close();

    inbuff.open(pathbuff);
    inout.open(pathout);
    int buf;
    if(inbuff && inout){
        while(!inbuff.eof()){
            inbuff>>buf;
            inout<<buf<<" ";
            buf = 0000;
        }
    }

    return 0;
}
