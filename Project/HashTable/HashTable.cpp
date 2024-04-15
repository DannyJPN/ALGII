#include "HashTable.hpp"
#include <iostream>
#include <functional>
#include <stdlib.h>
#include <vector>

    HashTable::HashTable()
    {
        HashTable(50);
    }
    HashTable::HashTable(int size)
    {

        for(int i = 0;i<size;i++)
        {
            table.push_back(nullptr);
        }
    }
    HashTable::~HashTable()
    {
        for(unsigned int i = 0;i<table.size();i++)
        {
            if(table.at(i)!=nullptr)
            {

            delete table.at(i);
            table.at(i)=nullptr;

            }
        }
        cout<<"Deleted"<<endl;
    }

    bool HashTable::Insert(string s)
    {
        if(LoadFactor()>=1)
        {
            cout<<"TABLE IS FULL"<<endl;
            return false;
        }
        if(Search(s))
        {
            cout<<"Inserting aborted due to DUPLICITY of "<<s<<endl;
            return false;
        }
        hash<string> hasher;
       unsigned int hashvalue = hasher(s);
       //cout<<hashvalue<<endl;
       unsigned int prime = NearestSmallerPrime(table.size());
       unsigned int index =hashvalue%prime;
       cout<<"Initial hash of "<<s<<" is "<<index<<endl;
       unsigned int attempt=0;
       //vector<unsigned int> tried;


            while(table.at(index)!=nullptr)
            {

                if(/*!Find(tried,index)*/attempt<=table.size())
                {
                //tried.push_back(index);
                //cout<<"COLLISION with "<<*table.at(index)<<"!!!\t";
                attempt++;
                index=(hashvalue+c1*attempt+c2*attempt*attempt)%prime;
                //cout<<attempt<<". ATTEMPT to index "<<index<<"\tH: "<<hashvalue+c1*attempt+c2*attempt*attempt<<" P: "<<prime<<endl;

                }
                else
                {
                    cout<<"Inserting aborted due to no index available"<<endl;
                    return false;
                }


            }
 //           tried.clear();
            table.at(index)=new string(s);

            cout<<"Inserting "<<*table.at(index)<<" at "<<index<< " successful at attempt "<<attempt<<endl;
            return true;



    }
    bool HashTable::Search(string s)
    {
        if(Count()==0)
        {
            //cout<<"TABLE IS BLANK"<<endl;
            return false;
        }
       hash<string> hasher;
       unsigned int hashvalue = hasher(s);
       unsigned int prime = NearestSmallerPrime(table.size());
       unsigned int index =hashvalue%prime;
       //cout<<"Initial hash of "<<s<<" is "<<index<<endl;
       unsigned int attempt=0;






//vector<unsigned int> tried;

            while(table.at(index)!=nullptr)
            {
                if(*table.at(index)==s)
                {
                    //cout<<"Element found"<<endl;
                    return true;
                }

                if(/*!Find(tried,index)*/attempt<table.size())
                {
                //tried.push_back(index);
                //cout<<"COLLISION with "<<*table.at(index)<<"!!!\t";
                attempt++;
                index=(hashvalue+c1*attempt+c2*attempt*attempt)%prime;
                //cout<<attempt<<". ATTEMPT to index "<<index<<"\tH: "<<hashvalue+c1*attempt+c2*attempt*attempt<<" P: "<<prime<<endl;

                }
                else
                {
                    //cout<<"No indexes available"<<endl;
                    return false;
                }

              //cout<<attempt<<". ATTEMPT to index "<<(index+c1*attempt+c2*attempt*attempt)%prime<<endl;

            }

            //cout<<"_________Element "<<s<<" not found."<<endl;
            return false;


    }
    int HashTable::Count()
    {
        int count = 0;
        for(unsigned int i =0;i<table.size();i++)
        {
            if(table[i]!=nullptr)
            {
                count++;
            }
        }
        return count;
    }
    double HashTable::LoadFactor()
    {
        return Count()/(double)table.size();
    }
    void HashTable::Report()
    {

        for(unsigned int i =0;i<table.size();i++)
        {


            if(table.at(i)==nullptr)
            {
                cout<<i<<".\t"<<"***BLANK POSITION***"<<endl;
            }
            else
            {
                cout<<i<<".\t"<<*(table.at(i))<<endl;
            }

        }
    }

unsigned int HashTable::NearestSmallerPrime(unsigned int max)
{
    unsigned int div_count;
    max++  ;
    do
    {


    div_count=0;
    max--;
    for(int i = max-1;i>1;i--)
    {
        if(max%i==0)
        {
            div_count++;
        }
    }

    }
    while(div_count!=0);
    return max;
}
bool HashTable::Find(vector<unsigned int> x,unsigned int s)
{

    for(int i = 0;i<x.size();i++)
    {
        if(x.at(i)==s)
        {
            return true;
        }
    }
    return false;
}

